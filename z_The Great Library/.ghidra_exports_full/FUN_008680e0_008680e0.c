// FUN_008680e0 @ 008680e0 body=[[008680e0, 00868139]]


void FUN_008680e0(void)

{
  int in_EAX;
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (-1 < in_EAX) {
    FUN_0099e240();
    piVar1 = (int *)FUN_00868600(in_EAX);
    if ((int *)*piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)*piVar1;
    }
    uVar2 = (uint)piVar1[2] >> 2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar3 + 8);
    }
    *(undefined4 *)
     (*(int *)(*(int *)(*(int *)(iVar3 + 4) + uVar2 * 4) + (piVar1[2] & 3U) * 4) + 0xa4) = 0;
  }
  return;
}

