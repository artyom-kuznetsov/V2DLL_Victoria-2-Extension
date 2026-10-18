// pDNameNode @ 00ac4b68 body=[[00ac4b68, 00ac4b91]]


/* Library Function - Single Match
    public: __thiscall pDNameNode::pDNameNode(class DName *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1)

{
  *(undefined ***)this = &PTR_LAB_00ddbeb0;
  if ((param_1 != (DName *)0x0) && ((param_1[4] == (DName)0x2 || (param_1[4] == (DName)0x3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 4) = param_1;
  return;
}

