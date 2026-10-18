// FUN_009999b0 @ 009999b0 body=[[009999b0, 00999ba9]]


void FUN_009999b0(void)

{
  undefined8 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined1 local_b0 [64];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
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
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = *(undefined8 **)(in_EAX + 0x6bc84);
  local_70 = *puVar1;
  local_68 = puVar1[1];
  local_60 = puVar1[2];
  (**(code **)(**(int **)(in_EAX + 100) + 0xbc))(*(int **)(in_EAX + 100),&local_70);
  uVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1c) + 0x16c))();
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),2,uVar2);
  uVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1c) + 0x174))();
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),3,uVar2);
  (**(code **)(**(int **)(in_EAX + 100) + 0x104))(*(int **)(in_EAX + 100),0,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0x1b,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0x89,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),7,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0xe,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0x114))(*(int **)(in_EAX + 100),0,6,1);
  (**(code **)(**(int **)(in_EAX + 100) + 0x114))(*(int **)(in_EAX + 100),0,5,1);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_14 = DAT_00f092fc;
  local_28 = DAT_00f092fc;
  local_3c = DAT_00f092fc;
  local_50 = DAT_00f092fc;
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),2,&local_50);
  local_54 = *(int *)(in_EAX + 0x6b9c0);
  local_58 = *(int *)(in_EAX + 0x6b9bc);
  D3DXMatrixOrthoRH(local_b0,(float)local_58,(float)local_54,0,DAT_00f092fc);
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),3,local_b0);
  return;
}

