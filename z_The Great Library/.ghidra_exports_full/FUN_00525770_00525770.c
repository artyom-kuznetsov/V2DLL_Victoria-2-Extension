// FUN_00525770 @ 00525770 body=[[00525770, 00525854]]


void FUN_00525770(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  int in_EAX;
  uint *unaff_EDI;
  
  uVar3 = *(uint *)(in_EAX + 0xe78);
  if ((*(int *)(in_EAX + 0xe7c) <= (int)param_3) &&
     (((*(int *)(in_EAX + 0xe7c) < (int)param_3 || (uVar3 < param_2)) &&
      (cVar7 = FUN_00522910(in_EAX,0,param_2 - uVar3,
                            (param_3 - *(int *)(in_EAX + 0xe7c)) - (uint)(param_2 < uVar3)),
      cVar7 == '\0')))) {
    uVar4 = *(uint *)(in_EAX + 0xe78);
    uVar5 = *(uint *)(in_EAX + 0xe7c);
    *(undefined4 *)(in_EAX + 0xe78) = 0;
    *(undefined4 *)(in_EAX + 0xe7c) = 0;
    iVar6 = *(int *)(in_EAX + (DAT_01258738 + 0xb) * 0x10);
    puVar2 = (uint *)(iVar6 + param_1 * 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar4;
    *unaff_EDI = uVar4;
    piVar1 = (int *)(iVar6 + param_1 * 8 + 4);
    *piVar1 = *piVar1 + uVar5 + (uint)CARRY4(uVar3,uVar4);
    unaff_EDI[1] = uVar5;
    return;
  }
  puVar2 = (uint *)(in_EAX + 0xe78);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - param_2;
  *(int *)(in_EAX + 0xe7c) = (*(int *)(in_EAX + 0xe7c) - param_3) - (uint)(uVar3 < param_2);
  if ((*(int *)(in_EAX + 0xe7c) < 1) && (*(int *)(in_EAX + 0xe7c) < 0)) {
    *(undefined4 *)(in_EAX + 0xe78) = 0;
    *(undefined4 *)(in_EAX + 0xe7c) = 0;
  }
  iVar6 = *(int *)(in_EAX + (DAT_01258738 + 0xb) * 0x10);
  puVar2 = (uint *)(iVar6 + param_1 * 8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + param_2;
  piVar1 = (int *)(iVar6 + param_1 * 8 + 4);
  *piVar1 = *piVar1 + param_3 + (uint)CARRY4(uVar3,param_2);
  *unaff_EDI = param_2;
  unaff_EDI[1] = param_3;
  return;
}

