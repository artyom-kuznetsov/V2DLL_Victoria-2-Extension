// before @ 00aae98b body=[[00aae98b, 00aae9ae]]


/* Library Function - Single Match
    public: int __thiscall type_info::before(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall type_info::before(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(0 < iVar1);
}

