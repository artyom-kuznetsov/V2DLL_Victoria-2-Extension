// FUN_00a4e290 @ 00a4e290 body=[[00a4e290, 00a4e5ca]]


void FUN_00a4e290(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_130 [72];
  undefined4 local_e8 [16];
  undefined1 local_a8 [64];
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
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
  undefined4 local_14;
  
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x58) + 0x6bd00) + -4 +
                      *(int *)(param_1 + 0xbc) * 4);
  }
  *(int **)(param_1 + 0xa4) = piVar2;
  uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,0,"WorldViewProjectionMatrix");
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))
                    (*(int **)(param_1 + 0xa4),0,"CurrentState");
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x34))(*(int **)(param_1 + 0xa4),&DAT_00e19be0);
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  if (*(int *)(param_1 + 0x94) < 0) {
    (**(code **)(**(int **)(param_1 + 0xa4) + 0xe8))(*(int **)(param_1 + 0xa4),uVar3);
  }
  else {
    uVar3 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x34))(*(int **)(param_1 + 0xa4),"ScrollTech")
    ;
    *(undefined4 *)(param_1 + 0xb4) = uVar3;
    uVar3 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x24))
                      (*(int **)(param_1 + 0xa4),0,&DAT_00e0bce4);
    *(undefined4 *)(param_1 + 0xb8) = uVar3;
    (**(code **)(**(int **)(param_1 + 0xa4) + 0xe8))
              (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xb4));
    uVar1 = *(uint *)(param_1 + 0x94);
    if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(param_1 + 0x58));
    }
    (**(code **)(**(int **)(param_1 + 0xa4) + 0xd0))
              (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xb8),uVar3);
  }
  puVar5 = local_e8;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_64 = *(int *)(param_2 + 0x6b9c0);
  local_68 = *(int *)(param_2 + 0x6b9bc);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_24 = DAT_00f092fc;
  local_38 = DAT_00f092fc;
  local_4c = DAT_00f092fc;
  local_60 = DAT_00f092fc;
  D3DXMatrixOrthoRH(local_130,(float)local_68,(float)local_64,0,DAT_00f092fc);
  D3DXMatrixMultiply(local_a8,local_e8,&local_60);
  D3DXMatrixMultiply(local_a8,local_a8,local_130);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x98))
            (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8),local_a8);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x78))
            (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xac),
             ((float)(param_4 + -1) / (float)*(int *)(param_1 + 0xa0)) * *(float *)(param_1 + 0x118)
            );
  local_14 = 0;
  (**(code **)(**(int **)(param_1 + 0xa4) + 0xfc))(*(int **)(param_1 + 0xa4),&local_14,0);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x100))(*(int **)(param_1 + 0xa4),0);
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x104))(*(int **)(param_1 + 0xa4));
  (**(code **)(**(int **)(param_2 + 100) + 0x164))(*(int **)(param_2 + 100),0x102);
  (**(code **)(**(int **)(param_2 + 100) + 0x14c))(*(int **)(param_2 + 100),5,2,param_1 + 0xc4,0x14)
  ;
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x104))(*(int **)(param_1 + 0xa4));
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x108))(*(int **)(param_1 + 0xa4));
  (**(code **)(**(int **)(param_1 + 0xa4) + 0x10c))(*(int **)(param_1 + 0xa4));
  return;
}

