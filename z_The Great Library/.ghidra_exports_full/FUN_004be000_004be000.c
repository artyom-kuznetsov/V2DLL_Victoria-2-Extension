// FUN_004be000 @ 004be000 body=[[004be000, 004be0e9]]


void FUN_004be000(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_EAX;
  uint *unaff_ESI;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(in_EAX + 0x130);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if (((cVar1 != 'R') || (*(char *)(in_EAX + 0x131) != 'E')) || (*(char *)(in_EAX + 0x132) != 'B'))
  {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 300) * 4);
    uVar3 = *(uint *)(*(int *)(in_EAX + 0x9c) + 0x2a8);
    lVar5 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
    iVar2 = *(int *)(iVar2 + 0xa60);
    uVar3 = *(uint *)(iVar2 + 0x328);
    lVar6 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
    iVar4 = *(int *)(in_EAX + 0x188);
    *(longlong *)unaff_ESI = lVar5 + lVar6;
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x84) < 1)) {
      uVar3 = *(uint *)(iVar2 + 0x338);
      uVar7 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
      uVar3 = *unaff_ESI;
      *unaff_ESI = *unaff_ESI + (uint)uVar7;
      unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)uVar7 >> 0x20) +
                     (uint)CARRY4(uVar3,(uint)uVar7);
    }
  }
  return;
}

