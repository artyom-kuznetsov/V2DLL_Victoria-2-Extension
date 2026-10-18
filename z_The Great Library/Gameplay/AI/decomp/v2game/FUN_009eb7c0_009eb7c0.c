// FUN_009eb7c0 @ 009eb7c0 body=[[009eb7c0, 009eb85b]]


void FUN_009eb7c0(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_108 [16];
  undefined4 local_c8 [16];
  undefined4 local_88 [16];
  int local_48 [17];
  
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x16c))();
  pcVar1 = *(code **)(*param_1 + 0x174);
  puVar5 = local_c8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined4 *)(*pcVar1)();
  puVar5 = local_88;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  D3DXMatrixMultiply(local_48,local_c8,local_88);
  piVar4 = local_48;
  piVar6 = param_1 + 0x62;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  D3DXMatrixInverse(local_108,0,local_48);
  piVar4 = local_108;
  piVar6 = param_1 + 0x92;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  return;
}

