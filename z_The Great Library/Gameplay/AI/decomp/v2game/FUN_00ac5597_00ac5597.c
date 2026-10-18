// operator+ @ 00ac5597 body=[[00ac5597, 00ac55ba]]


/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName const &)const 
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  DName *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(param_1,in_stack_00000008);
  return param_1;
}

