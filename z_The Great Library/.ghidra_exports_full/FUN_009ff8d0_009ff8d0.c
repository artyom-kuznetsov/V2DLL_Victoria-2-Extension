// FUN_009ff8d0 @ 009ff8d0 body=[[009ff8d0, 009ff927]]


void FUN_009ff8d0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x4c) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_009c1d40();
  }
  (**(code **)(*piVar1 + 0x20))
            (*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x44),
             *(undefined4 *)(in_ECX + 0x40));
  return;
}

