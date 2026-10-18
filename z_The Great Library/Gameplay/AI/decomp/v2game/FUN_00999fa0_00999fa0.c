// FUN_00999fa0 @ 00999fa0 body=[[00999fa0, 0099a1f5]]


void FUN_00999fa0(void)

{
  undefined8 *puVar1;
  void *_Dst;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_c0 [72];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
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
  int local_18;
  int local_14;
  
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0x1b,0);
  puVar1 = *(undefined8 **)(in_EAX + 0x6bc84);
  local_78 = *puVar1;
  local_70 = puVar1[1];
  local_68 = puVar1[2];
  (**(code **)(**(int **)(in_EAX + 100) + 0xbc))(*(int **)(in_EAX + 100),&local_78);
  uVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1c) + 0x16c))();
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),2,uVar2);
  uVar2 = (**(code **)(*(int *)((int)puVar1 + 0x1c) + 0x174))();
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),3,uVar2);
  (**(code **)(**(int **)(in_EAX + 100) + 0x104))(*(int **)(in_EAX + 100),0,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0x89,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),7,0);
  (**(code **)(**(int **)(in_EAX + 100) + 0x114))(*(int **)(in_EAX + 100),0,6,1);
  (**(code **)(**(int **)(in_EAX + 100) + 0x114))(*(int **)(in_EAX + 100),0,5,1);
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
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),2,&local_60);
  local_14 = *(int *)(in_EAX + 0x6b9c0);
  local_18 = *(int *)(in_EAX + 0x6b9bc);
  D3DXMatrixOrthoRH(local_c0,(float)local_18,(float)local_14,0,DAT_00f092fc);
  (**(code **)(**(int **)(in_EAX + 100) + 0xb0))(*(int **)(in_EAX + 100),3,local_c0);
  _Dst = *(void **)(in_EAX + 0xf8);
  if (_Dst != *(void **)(in_EAX + 0xfc)) {
    local_14 = 0;
    FID_conflict__memcpy(_Dst,*(void **)(in_EAX + 0xfc),0);
    *(int *)(in_EAX + 0xfc) = local_14 + (int)_Dst;
  }
  iVar3 = in_EAX + 0x6bb0c;
  uVar2 = FUN_005da1e0(iVar3);
  FUN_0099a200(uVar2,iVar3);
  FUN_00999d00(in_EAX);
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),7,1);
  return;
}

