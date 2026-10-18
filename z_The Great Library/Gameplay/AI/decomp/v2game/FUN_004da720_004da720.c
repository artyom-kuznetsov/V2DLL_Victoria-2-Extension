// FUN_004da720 @ 004da720 body=[[004da720, 004da739] [004da740, 004da788]]


void FUN_004da720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  uint *puVar5;
  int iVar6;
  uint *unaff_ESI;
  
  iVar6 = 0;
  if (in_EAX != 0) {
    iVar4 = *(int *)(in_EAX + 0x60);
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) goto LAB_004da756;
      iVar4 = *(int *)(iVar3 + 0x224);
    } while (*(int *)(iVar3 + 0x18) != param_1);
    iVar6 = *(int *)(iVar3 + 0x20);
  }
LAB_004da756:
  FUN_004da850(param_1,unaff_ESI,param_2,param_3,param_4,iVar6 + 1);
  puVar5 = (uint *)FUN_004dab20();
  uVar2 = *puVar5;
  uVar1 = *unaff_ESI;
  *unaff_ESI = *unaff_ESI + uVar2;
  unaff_ESI[1] = unaff_ESI[1] + puVar5[1] + (uint)CARRY4(uVar1,uVar2);
  return;
}

