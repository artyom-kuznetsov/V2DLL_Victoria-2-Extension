// FUN_0099cb10 @ 0099cb10 body=[[0099cb10, 0099cee7]]


undefined4 FUN_0099cb10(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_108 [16];
  undefined4 local_c8 [16];
  undefined4 local_88 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = param_1;
  if ((*(char *)(param_1 + 0x6bc4c) == '\0') ||
     (*(char *)(*(int *)(param_1 + 0x6bc48) + 0x50) == '\0')) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 100) + 0xe4))(*(int **)(param_1 + 100),0x89,0);
  (**(code **)(**(int **)(iVar1 + 100) + 0xe4))(*(int **)(iVar1 + 100),0xe,0);
  (**(code **)(**(int **)(iVar1 + 100) + 0xe4))(*(int **)(iVar1 + 100),0x1b,1);
  (**(code **)(**(int **)(iVar1 + 100) + 0xe4))(*(int **)(iVar1 + 100),0x13,1);
  (**(code **)(**(int **)(iVar1 + 100) + 0xe4))(*(int **)(iVar1 + 100),0x14,4);
  if (*(int *)(iVar1 + 0x6bc58) == 0) {
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,2,2);
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,3,1);
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,1,2);
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),1,1,1);
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,5,2);
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,6,1);
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,4,2);
    (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),1,4,1);
    (**(code **)(**(int **)(iVar1 + 100) + 0x104))
              (*(int **)(iVar1 + 100),0,*(undefined4 *)(iVar1 + 0x6bc50));
    piVar2 = param_2;
    uVar3 = (**(code **)(*param_2 + 0x174))();
    (**(code **)(**(int **)(iVar1 + 100) + 0xb0))(*(int **)(iVar1 + 100),3,uVar3);
    uVar3 = (**(code **)(*piVar2 + 0x16c))();
    (**(code **)(**(int **)(iVar1 + 100) + 0xb0))(*(int **)(iVar1 + 100),2,uVar3);
  }
  else {
    (**(code **)(**(int **)(iVar1 + 0x6bc58) + 0xe8))
              (*(int **)(iVar1 + 0x6bc58),"RenderShadowToScene");
    (**(code **)(**(int **)(iVar1 + 0x6bc58) + 0xfc))(*(int **)(iVar1 + 0x6bc58),&param_1,0);
    (**(code **)(**(int **)(iVar1 + 0x6bc58) + 0x100))(*(int **)(iVar1 + 0x6bc58),0);
    (**(code **)(**(int **)(iVar1 + 0x6bc58) + 0xd0))
              (*(int **)(iVar1 + 0x6bc58),"ShadowTexture",*(undefined4 *)(iVar1 + 0x6bc50));
    iVar5 = **(int **)(iVar1 + 0x6bc58);
    uVar3 = (**(code **)(*param_2 + 0x174))();
    (**(code **)(iVar5 + 0x98))(*(undefined4 *)(iVar1 + 0x6bc58),"ProjectionMatrix",uVar3);
  }
  puVar4 = (undefined4 *)(param_3 + 0x160);
  puVar6 = local_c8;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)(param_3 + 0x1a0);
  puVar6 = local_108;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x16c))();
  puVar6 = local_88;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  D3DXMatrixInverse(local_88,0,local_88);
  D3DXMatrixMultiply(local_88,local_88,local_c8);
  D3DXMatrixMultiply(local_88,local_88,local_108);
  if (*(int *)(iVar1 + 0x6bc58) != 0) {
    (**(code **)(**(int **)(iVar1 + 0x6bc58) + 0x98))
              (*(int **)(iVar1 + 0x6bc58),"ViewToLightProjectionMatrix",local_88);
    return 1;
  }
  local_18 = 0.5 / (float)*(int *)(*(int *)(iVar1 + 0x6bc48) + 0x58) + 0.5;
  local_48 = DAT_00f17898;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_34 = DAT_00f1f768;
  local_10 = 0xc8c35000;
  local_20 = 0x4b800000;
  local_c = DAT_00f092fc;
  local_14 = local_18;
  D3DXMatrixMultiply(local_88,local_88,&local_48);
  (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,0xb,0x20000);
  (**(code **)(**(int **)(iVar1 + 100) + 0x10c))(*(int **)(iVar1 + 100),0,0x18,0x104);
  (**(code **)(**(int **)(iVar1 + 100) + 0xb0))(*(int **)(iVar1 + 100),0x10,local_88);
  return 1;
}

