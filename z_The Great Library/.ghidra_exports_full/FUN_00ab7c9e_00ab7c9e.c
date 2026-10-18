// __inc @ 00ab7c9e body=[[00ab7c9e, 00ab7cb3]]


/* Library Function - Single Match
    __inc
   
   Library: Visual Studio 2010 Release */

uint __inc(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  FILE *in_EDX;
  
  piVar1 = &in_EDX->_cnt;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *in_EDX->_ptr;
    in_EDX->_ptr = in_EDX->_ptr + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf(in_EDX);
  return uVar3;
}

