class Foo
{
  static Void f(Int[] r, Bool raise)
  {
    r.add(0)
    try
    {
      r.add(1)
      if (raise) throw ArgErr.make
      r.add(2)
    }
    catch
    {
      r.add(3)
    }
    finally
    {
      r.add(4)
    }
  }
}