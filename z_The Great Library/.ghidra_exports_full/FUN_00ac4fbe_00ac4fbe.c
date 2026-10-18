// operator[] @ 00ac4fbe body=[[00ac4fbe, 00ac500c]]


/* Library Function - Single Match
    public: class DName __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  undefined4 *puVar1;
  uint in_stack_00000008;
  
  if (in_stack_00000008 < 10) {
    if ((*(int *)this == -1) || (*(int *)this < (int)in_stack_00000008)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else {
      puVar1 = *(undefined4 **)(this + in_stack_00000008 * 4 + 4);
      *(undefined4 *)param_1 = *puVar1;
      *(undefined4 *)(param_1 + 4) = puVar1[1];
    }
  }
  else {
    DName::DName((DName *)param_1,3);
  }
  return param_1;
}

