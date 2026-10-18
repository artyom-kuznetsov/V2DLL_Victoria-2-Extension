// FUN_004f34d0 @ 004f34d0 body=[[004f34d0, 004f34fe]]


int FUN_004f34d0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = (*(int *)(*(int *)(unaff_ESI + 0x18) + 0xb8) * 1000) / 1000;
  return ((iVar1 - *(int *)(unaff_ESI + 0x17c)) * 100) / iVar1;
}

