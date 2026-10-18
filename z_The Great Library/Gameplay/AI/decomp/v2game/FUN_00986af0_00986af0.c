// FUN_00986af0 @ 00986af0 body=[[00986af0, 00986c83]]


void FUN_00986af0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  float *in_EAX;
  int in_ECX;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_48 [4];
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float *local_8;
  
  if ((*in_EAX != *(float *)(in_ECX + 0x16c)) || (in_EAX[1] != *(float *)(in_ECX + 0x170))) {
    *(float *)(in_ECX + 0x16c) = *in_EAX;
    piVar2 = *(int **)(in_ECX + 0x140);
    puVar1 = (undefined4 *)(in_ECX + 0x140);
    *(float *)(in_ECX + 0x170) = in_EAX[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *puVar1 = 0;
    }
    piVar2 = *(int **)(*(int *)(*(int *)(in_ECX + 0x13c) + 0x8c) + 100);
    local_24 = *(float *)(*(int *)(in_ECX + 0x13c) + 0x94) * 0.5;
    local_48[0] = *in_EAX - local_24;
    local_48[1] = in_EAX[1] - local_24;
    local_38 = *in_EAX + local_24;
    local_24 = in_EAX[1] + local_24;
    local_48[2] = 0.0;
    local_48[3] = (float)DAT_00f092fc;
    local_30 = DAT_00f092fc;
    local_2c = DAT_00f092fc;
    local_20 = 0;
    local_1c = 0;
    local_10 = DAT_00f092fc;
    local_c = 0;
    local_34 = local_48[1];
    local_28 = local_48[0];
    local_18 = local_38;
    local_14 = local_24;
    (**(code **)(*piVar2 + 0x68))(piVar2,0x40,8,0,1,puVar1,0);
    local_8 = (float *)0x0;
    (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1,0,0x40,&local_8,0);
    pfVar4 = local_48;
    pfVar5 = local_8;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
    }
    (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
  }
  return;
}

