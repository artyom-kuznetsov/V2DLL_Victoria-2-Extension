// FUN_004f5140 @ 004f5140 body=[[004f5140, 004f5253]]


/* WARNING: Removing unreachable block (ram,0x004f5214) */

undefined8 * FUN_004f5140(undefined8 *param_1)

{
  int iVar1;
  int in_EAX;
  uint *in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 local_10;
  
  if (in_ECX == (uint *)0x0) {
    uVar4 = *(uint *)(in_EAX + 0x1d8) - *(uint *)(in_EAX + 0x168);
    uVar5 = uVar4 - *(uint *)(in_EAX + 0x158);
    uVar6 = uVar5 + *(uint *)(in_EAX + 0x170);
    uVar7 = uVar6 + *(uint *)(in_EAX + 0x160);
    uVar4 = ((((*(int *)(in_EAX + 0x1dc) - *(int *)(in_EAX + 0x16c)) -
              (uint)(*(uint *)(in_EAX + 0x1d8) < *(uint *)(in_EAX + 0x168))) -
             *(int *)(in_EAX + 0x15c)) - (uint)(uVar4 < *(uint *)(in_EAX + 0x158))) +
            *(int *)(in_EAX + 0x174) + (uint)CARRY4(uVar5,*(uint *)(in_EAX + 0x170)) +
            *(int *)(in_EAX + 0x164) + (uint)CARRY4(uVar6,*(uint *)(in_EAX + 0x160));
  }
  else {
    uVar7 = *in_ECX;
    uVar4 = in_ECX[1];
  }
  iVar3 = *(uint *)(in_EAX + 0x168) + *(uint *)(in_EAX + 0x158);
  uVar5 = (uint)CARRY4(*(uint *)(in_EAX + 0x168),*(uint *)(in_EAX + 0x158));
  iVar1 = *(int *)(in_EAX + 0x16c) + *(int *)(in_EAX + 0x15c);
  iVar2 = iVar1 + uVar5;
  local_10 = CONCAT44(uVar4,uVar7);
  if ((-1 < iVar2) &&
     ((iVar2 != 0 &&
       SCARRY4(*(int *)(in_EAX + 0x16c),*(int *)(in_EAX + 0x15c)) == SCARRY4(iVar1,uVar5) ||
      (iVar3 != 0)))) {
    FUN_0040b340((float)((float10)local_10 * (float10)3.0517578125e-05));
    lVar8 = FUN_00b31c36();
    if (lVar8 <= CONCAT44(iVar2,iVar3)) {
      uVar9 = __alldiv(uVar7 << 0xf,uVar4 << 0xf | uVar7 >> 0x11,iVar3,iVar2);
      *param_1 = uVar9;
      return param_1;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  return param_1;
}

