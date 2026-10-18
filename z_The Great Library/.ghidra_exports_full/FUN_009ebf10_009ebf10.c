// FUN_009ebf10 @ 009ebf10 body=[[009ebf10, 009ebf7e]]


void FUN_009ebf10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_88 [13];
  undefined4 auStack_54 [3];
  undefined1 local_48 [68];
  
  D3DXMatrixLookAtLH(local_88,param_1 + 0xf8,param_1 + 0x104,param_1 + 0x110);
  puVar2 = local_88;
  puVar3 = (undefined4 *)(param_1 + 0x1c8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  D3DXMatrixInverse(local_48,0,local_88);
  puVar2 = auStack_54;
  puVar3 = (undefined4 *)(param_1 + 0x208);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

