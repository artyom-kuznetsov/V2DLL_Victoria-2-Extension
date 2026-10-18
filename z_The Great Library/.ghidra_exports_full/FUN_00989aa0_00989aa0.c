// FUN_00989aa0 @ 00989aa0 body=[[00989aa0, 00989ab3]]


void FUN_00989aa0(void)

{
  DWORD *pDVar1;
  LPSTR in_EAX;
  
  pDVar1 = (DWORD *)(in_EAX + 0x10);
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    in_EAX = *(LPSTR *)in_EAX;
  }
  CharUpperBuffA(in_EAX,*pDVar1);
  return;
}

