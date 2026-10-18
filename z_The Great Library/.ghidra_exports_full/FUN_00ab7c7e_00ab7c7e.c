// __hextodec @ 00ab7c7e body=[[00ab7c7e, 00ab7c9d]]


/* Library Function - Single Match
    __hextodec
   
   Library: Visual Studio 2010 Release */

uint __hextodec(byte param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _isdigit((uint)param_1);
  uVar2 = (uint)(char)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

