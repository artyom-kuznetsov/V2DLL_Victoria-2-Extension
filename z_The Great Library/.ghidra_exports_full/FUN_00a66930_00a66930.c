// FUN_00a66930 @ 00a66930 body=[[00a66930, 00a6697c] [00a66980, 00a669ea]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a66930(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int in_ECX;
  int local_18 [4];
  int local_8;
  
  DVar2 = timeGetTime();
  DAT_012586d0 = DVar2 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  FUN_00a8a450();
  iVar3 = FUN_00a89d00(*(undefined4 *)(in_ECX + 0x18),local_18,param_1);
  iVar1 = local_8;
  while( true ) {
    if (iVar3 < 1) {
      FUN_00a8a360();
      return;
    }
    if (local_18[0] == 2) break;
    local_8 = iVar1;
    if (local_18[0] == 3) {
      (*(code *)PTR__free_00f071fc)(*(undefined4 *)(iVar1 + 8));
      (*(code *)PTR__free_00f071fc)(iVar1);
    }
    iVar3 = FUN_00a89d00(*(undefined4 *)(in_ECX + 0x18),local_18,param_1);
    iVar1 = local_8;
  }
  _puts("Disconnection succeeded.");
  *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x2c) = 0;
  return;
}

