// exception @ 00aae3d0 body=[[00aae3d0, 00aae3f4]]


/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2010 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  this[8] = (exception)0x0;
  operator=(this,param_1);
  return this;
}

