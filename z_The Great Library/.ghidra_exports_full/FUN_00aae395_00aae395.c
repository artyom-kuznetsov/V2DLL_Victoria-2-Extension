// bad_typeid @ 00aae395 body=[[00aae395, 00aae3b2]]


/* Library Function - Single Match
    public: __thiscall std::bad_typeid::bad_typeid(char const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

bad_typeid * __thiscall std::bad_typeid::bad_typeid(bad_typeid *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = vftable;
  return this;
}

