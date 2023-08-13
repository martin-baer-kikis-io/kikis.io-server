       




	   ///--------------------------------------------------------------------
        /// <summary>
        /// Inserts a string into each text control of interest.
        /// </summary>
        /// <param name="element">A text control.</param>
        /// <param name="value">The string to be inserted.</param>
        ///--------------------------------------------------------------------
        private void InsertTextUsingUIAutomation(AutomationElement element, string value)
        {
            try
            {
                // Validate arguments / initial setup
                if (value == null)
                    throw new ArgumentNullException(
                        "String parameter must not be null.");

                if (element == null)
                    throw new ArgumentNullException(
                        "AutomationElement parameter must not be null");

                // A series of basic checks prior to attempting an insertion.
                //
                // Check #1: Is control enabled?
                // An alternative to testing for static or read-only controls
                // is to filter using
                // PropertyCondition(AutomationElement.IsEnabledProperty, true)
                // and exclude all read-only text controls from the collection.
                if (!element.Current.IsEnabled)
                {
                    throw new InvalidOperationException(
                        "The control with an AutomationID of "
                        + element.Current.AutomationId.ToString()
                        + " is not enabled.\n\n");
                }

                // Check #2: Are there styles that prohibit us
                //           from sending text to this control?
                if (!element.Current.IsKeyboardFocusable)
                {
                    throw new InvalidOperationException(
                        "The control with an AutomationID of "
                        + element.Current.AutomationId.ToString()
                        + "is read-only.\n\n");
                }


                // Once you have an instance of an AutomationElement,
                // check if it supports the ValuePattern pattern.
                object valuePattern = null;

                // Control does not support the ValuePattern pattern
                // so use keyboard input to insert content.
                //
                // NOTE: Elements that support TextPattern
                //       do not support ValuePattern and TextPattern
                //       does not support setting the text of
                //       multi-line edit or document controls.
                //       For this reason, text input must be simulated
                //       using one of the following methods.
                //
                if (!element.TryGetCurrentPattern(
                    ValuePattern.Pattern, out valuePattern))
                {
                    richTextBox1.AppendText("The control with an AutomationID of ");
                    richTextBox1.AppendText(element.Current.AutomationId.ToString());
                    richTextBox1.AppendText(" does not support ValuePattern.");
                    richTextBox1.AppendText(" Using keyboard input.\n");

                    // Set focus for input functionality and begin.
                    element.SetFocus();

                    // Pause before sending keyboard input.
                    Thread.Sleep(100);

                    // Delete existing content in the control and insert new content.
                    SendKeys.SendWait("^{HOME}");   // Move to start of control
                    SendKeys.SendWait("^+{END}");   // Select everything
                    SendKeys.SendWait("{DEL}");     // Delete selection
                    SendKeys.SendWait(value);
                }
                // Control supports the ValuePattern pattern so we can
                // use the SetValue method to insert content.
                else
                {
                    //string currVal = ((ValuePattern)valuePattern).Current.Value.ToString();
                    richTextBox1.AppendText("The control with an AutomationID of ");
                    richTextBox1.AppendText(element.Current.AutomationId.ToString());
                    richTextBox1.AppendText((" supports ValuePattern."));
                    richTextBox1.AppendText(" Using ValuePattern.SetValue().\n");

                    // Set focus for input functionality and begin.
                    element.SetFocus();

                    ((ValuePattern)valuePattern).SetValue(value);

                }
            }
            catch (ArgumentNullException exc)
            {
                richTextBox1.AppendText(exc.Message);
            }
            catch (InvalidOperationException exc)
            {
                richTextBox1.AppendText(exc.Message);
            }
            finally
            {
                richTextBox1.AppendText("");
            }
        }
		
		
		
		
		
		

Condition conditions = new AndCondition(
  new PropertyCondition(AutomationElement.IsEnabledProperty, true),
  new PropertyCondition(AutomationElement.ControlTypeProperty,
      ControlType.Document)
  );

// Find all children that match the specified conditions.
AutomationElementCollection elementCollection =
    result.FindAll(TreeScope.Children, conditions);
//return elementCollection;

foreach (AutomationElement x in elementCollection)
{
    InsertTextUsingUIAutomation(x, "Hello World!");
}






private AutomationElement getRootElement(string windowTitle)
{
    AutomationElement root = AutomationElement.RootElement;
    AutomationElement result = null;
    foreach (AutomationElement window in root.FindAll(TreeScope.Children, new PropertyCondition(AutomationElement.ControlTypeProperty, ControlType.Window)))
    {
        try
        {
            if (window.Current.Name.Contains(windowTitle) && window.Current.IsKeyboardFocusable)
            {
                result = window;
                break;
            }
        }
        catch (Exception e)
        {
            //this will throw if a window has been closed since the start of the program.. no need to stop
        }
    }

    return result;
}





private void NotepadInsertButton_Click(object sender, EventArgs e)
{
    string windowTitle = "Untitled - Notepad";
    AutomationElement result = getRootElement(windowTitle);

    if (result == null)
    {
        throw new ArgumentException();
    }
    Condition conditions = new AndCondition(
      new PropertyCondition(AutomationElement.IsEnabledProperty, true),
      new PropertyCondition(AutomationElement.ControlTypeProperty,
      ControlType.Document)
      );

    // Find all children that match the specified conditions.
    AutomationElementCollection elementCollection =
       result.FindAll(TreeScope.Children, conditions);
    //return elementCollection;

    foreach (AutomationElement x in elementCollection)
    {
        InsertTextUsingUIAutomation(x, "Hello World!");
    }
}