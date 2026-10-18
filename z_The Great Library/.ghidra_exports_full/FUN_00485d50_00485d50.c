// FUN_00485d50 @ 00485d50 body=[[00485d50, 00485e3b]]


uint * FUN_00485d50(uint *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_EAX;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_c;
  
  iVar2 = *(int *)(in_EAX + 0x184);
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = FUN_00b31c36();
  iVar5 = (int)((ulonglong)uVar6 >> 0x20);
  if ((iVar5 <= iVar2) && ((iVar5 < iVar2 || ((uint)uVar6 < *(uint *)(in_EAX + 0x180))))) {
    local_c = __allmul(*(undefined4 *)(in_EAX + 0x180),iVar2,param_3,param_4);
    local_c = local_c >> 0xf;
    FUN_0095a5f0(-(int)local_c,-((int)((ulonglong)local_c >> 0x20) + (uint)((int)local_c != 0)));
    uVar1 = *param_1;
    *param_1 = *param_1 + (uint)local_c;
    uVar3 = *(uint *)(in_EAX + 0x250);
    param_1[1] = param_1[1] + local_c._4_4_ + (uint)CARRY4(uVar1,(uint)local_c);
    iVar2 = *(int *)(in_EAX + 0x254);
    if ((DAT_0125b9f4 <= iVar2) && ((DAT_0125b9f4 < iVar2 || (DAT_0125b9f0 < uVar3)))) {
      *param_2 = 1;
      puVar4 = (uint *)FUN_004d1cd0(&local_c,uVar3,iVar2);
      uVar3 = *puVar4;
      uVar1 = *param_1;
      *param_1 = *param_1 + uVar3;
      param_1[1] = param_1[1] + puVar4[1] + (uint)CARRY4(uVar1,uVar3);
    }
  }
  return param_1;
}

