try
{
    func1();
    try
    {
        func2();
    }
    catch (spec_err)
    { /* ... */
    }
    func3();
}
catch (type_err)
{ /* ... */
}
// if no throw is issued, control resumes here.