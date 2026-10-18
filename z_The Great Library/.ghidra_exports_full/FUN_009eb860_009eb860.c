// FUN_009eb860 @ 009eb860 body=[[009eb860, 009eb915]]


void FUN_009eb860(char param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [17];
  
  *(char *)(in_ECX + 0x144) = param_1;
  if (param_1 == '\0') {
    D3DXMatrixPerspectiveFovLH
              (local_48,*(undefined4 *)(in_ECX + 0x134),*(undefined4 *)(in_ECX + 0x138),
               *(undefined4 *)(in_ECX + 0x13c),*(undefined4 *)(in_ECX + 0x140));
  }
  else {
    D3DXMatrixOrthoRH(local_48,param_2,param_3,DAT_00f177d4,0xc2200000);
  }
  puVar2 = local_48;
  puVar3 = (undefined4 *)(in_ECX + 0x148);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

