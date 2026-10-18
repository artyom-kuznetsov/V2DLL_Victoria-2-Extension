// FUN_00b26b1a @ 00b26b1a body=[[00b26b1a, 00b26b57] [00b26b60, 00b26cf7]]


void FUN_00b26b1a(void)

{
  undefined4 *puVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int in_EDX;
  uint uVar4;
  uint unaff_EBP;
  uint uVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  
  if ((in_EDX < 0) || ((in_EDX < 1 && (in_EAX < 0x101)))) {
    uVar4 = 0;
    iVar6 = 0;
    uVar5 = in_EAX;
  }
  else {
    uVar4 = in_EAX - 0x100;
    iVar6 = in_EDX - (uint)(in_EAX < 0x100);
    uVar5 = 0x100;
  }
  if ((-1 < in_EDX) && ((0 < in_EDX || (in_EAX != 0)))) {
    while (*(int *)(unaff_EBP - 0x108) < 0x10015) {
      iVar2 = FUN_00b2a2f0(*(undefined4 *)(unaff_EBP - 0x110),uVar4,iVar6);
      if (iVar2 == 0) {
        FUN_00b1f840(0);
        __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP,0xffffffff);
        return;
      }
      if (*(int *)(unaff_EBP - 0x108) == 0) {
        lVar8 = FUN_00b2a250(*(undefined4 *)(unaff_EBP - 0x110),unaff_EBP - 0x104,uVar5,1);
        if (lVar8 != 1) goto LAB_00b26c91;
        *(uint *)(unaff_EBP - 0x108) = uVar5;
      }
      else {
        lVar8 = FUN_00b2a250(*(undefined4 *)(unaff_EBP - 0x110),unaff_EBP - 0x104,uVar5 - 4,1);
        if (lVar8 != 1) goto LAB_00b26c91;
        iVar2 = *(int *)(unaff_EBP - 0x108);
        *(undefined4 *)((unaff_EBP - 0x108) + uVar5) = *(undefined4 *)(unaff_EBP - 0x10c);
        *(uint *)(unaff_EBP - 0x108) = iVar2 + -4 + uVar5;
      }
      *(undefined4 *)(unaff_EBP - 0x10c) = *(undefined4 *)(unaff_EBP - 0x104);
      for (uVar3 = uVar5 - 4; 0 < (int)uVar3; uVar3 = uVar3 - 1) {
        if ((((*(char *)((unaff_EBP - 0x104) + uVar3) == 'P') &&
             (*(char *)((unaff_EBP - 0x103) + uVar3) == 'K')) &&
            (*(char *)((unaff_EBP - 0x102) + uVar3) == '\x05')) &&
           (*(char *)((unaff_EBP - 0x101) + uVar3) == '\x06')) {
          puVar1 = *(undefined4 **)(unaff_EBP - 0x11c);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *(undefined4 *)(unaff_EBP - 0x118);
            puVar1[1] = *(undefined4 *)(unaff_EBP - 0x114);
          }
          __security_check_cookie
                    (*(uint *)(unaff_EBP - 4) ^ unaff_EBP,
                     ((int)uVar3 >> 0x1f) + iVar6 + (uint)CARRY4(uVar3,uVar4));
          return;
        }
      }
      uVar3 = uVar5 - 4;
      bVar7 = uVar4 < uVar3;
      uVar4 = uVar4 - uVar3;
      iVar6 = (iVar6 - ((int)uVar3 >> 0x1f)) - (uint)bVar7;
      if ((iVar6 < 1) && (iVar6 < 0)) {
        uVar4 = 0;
        iVar6 = 0;
      }
      iVar2 = (int)*(uint *)(unaff_EBP - 0x108) >> 0x1f;
      if ((*(int *)(unaff_EBP - 0x114) < iVar2) ||
         ((*(int *)(unaff_EBP - 0x114) <= iVar2 &&
          (*(uint *)(unaff_EBP - 0x118) <= *(uint *)(unaff_EBP - 0x108))))) break;
    }
  }
  FUN_00b1f840("Not an archive");
LAB_00b26c91:
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP,0xffffffff);
  return;
}

