// operator+ @ 00ac585b body=[[00ac585b, 00ac587e]]


/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall DName::operator+(DName *this,char *param_1)

{
  char *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=((DName *)param_1,in_stack_00000008);
  return param_1;
}

