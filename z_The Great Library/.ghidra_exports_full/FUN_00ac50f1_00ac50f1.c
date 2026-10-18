// operator+= @ 00ac50f1 body=[[00ac50f1, 00ac5132]]


/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(enum DNameStatus)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1)

{
  DNameStatusNode *pDVar1;
  
  if ((char)this[4] < '\x02') {
    if (((*(int *)this == 0) || (param_1 == 2)) || (param_1 == 3)) {
      operator=(this,param_1);
    }
    else if (param_1 != 0) {
      pDVar1 = DNameStatusNode::make(param_1);
      append(this,(DNameNode *)pDVar1);
    }
  }
  return this;
}

