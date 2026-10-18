// operator+ @ 00ac53bb body=[[00ac53bb, 00ac53de]]


/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(enum DNameStatus)const 
   
   Library: Visual Studio 2010 Release */

DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1)

{
  DNameStatus in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=((DName *)param_1,in_stack_00000008);
  return param_1;
}

