// operator+= @ 00ac53df body=[[00ac53df, 00ac5421]]


/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  DNameNode *pDVar1;
  
  if ((char)this[4] < '\x02') {
    pDVar1 = *(DNameNode **)param_1;
    if (pDVar1 == (DNameNode *)0x0) {
      operator+=(this,(int)(char)param_1[4]);
    }
    else if (*(int *)this == 0) {
      *(DNameNode **)this = pDVar1;
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    }
    else {
      append(this,pDVar1);
    }
  }
  return this;
}

