// operator+ @ 00ac5837 body=[[00ac5837, 00ac585a]]


/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char)const 
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+(DName *this,char param_1)

{
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  
  *(undefined4 *)_param_1 = *(undefined4 *)this;
  *(undefined4 *)(_param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(_param_1,in_stack_00000008);
  return _param_1;
}

