// FUN_00a6acc0 @ 00a6acc0 body=[[00a6acc0, 00a6ace8] [00a6acf0, 00a6ad67]]


void FUN_00a6acc0(void)

{
  uint *puVar1;
  uint uVar2;
  int *in_EAX;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EDI;
  
  puVar3 = tbb::internal::NFS_Allocate(1,0x28,(void *)0x0);
  *in_EAX = (int)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = **(undefined4 **)(unaff_EDI + 4);
    puVar3[1] = unaff_EDI;
    uVar4 = 0;
    puVar3 = puVar3 + 2;
    do {
      *puVar3 = *(undefined4 *)(*(int *)(unaff_EDI + 4) + 0x180 + uVar4);
      uVar4 = uVar4 + 0x14;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 0xa0);
  }
  puVar1 = (uint *)*in_EAX;
  uVar4 = *puVar1;
  if (uVar4 == *(uint *)(*(int *)(puVar1[1] + 4) + 0x80)) {
    in_EAX[1] = 0;
    return;
  }
  uVar2 = puVar1[(uVar4 * 3 & 7) + 2];
  uVar4 = *(int *)(*(int *)(puVar1[1] + 4) + 0x100) - 1U & uVar4 >> 3;
  in_EAX[1] = uVar2 + 8 + uVar4 * 4;
  if ((*(uint *)(uVar2 + 4) & 1 << ((byte)uVar4 & 0x1f)) == 0) {
    FUN_00a6ad70();
  }
  return;
}

