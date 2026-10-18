// FUN_00841870 @ 00841870 body=[[00841870, 008418fc]]


undefined4 FUN_00841870(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = 0;
  FUN_00401000(0x43fa4001);
  uVar1 = FUN_00b31c00();
  local_18 = *(undefined4 *)(in_EAX + 8);
  local_14 = *(undefined4 *)(in_EAX + 0xc);
  local_18 = FUN_00834150(&param_2,&local_18,0,uVar1,uVar2);
  local_10 = *(undefined4 *)(in_EAX + 8);
  FUN_00832dd0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4),
               *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0xc) * 4),param_1,
               &local_18);
  return local_18;
}

