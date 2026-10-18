// FUN_00437163 @ 00437163 body=[[00437163, 0043727c]]


/* WARNING: Removing unreachable block (ram,0x00437246) */

void FUN_00437163(void)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  undefined4 in_ECX;
  int unaff_EBX;
  int unaff_EBP;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  uVar2 = __allmul(*(undefined4 *)(unaff_EBX + 0x10),*(undefined4 *)(unaff_EBX + 0x14),in_EAX,in_ECX
                  );
  uVar3 = __alldiv((int)(uVar2 & 0x7fffffff8000),
                   (int)((longlong)uVar2 >> 0x2f) << 0xf | (uint)((uVar2 & 0x7fffffff8000) >> 0x20),
                   DAT_00f0aac8,DAT_00f0aacc);
  FUN_00525770(*(undefined4 *)(unaff_EBP + 0x14),uVar3);
  lVar4 = __allmul(DAT_00f0aac8,DAT_00f0aacc,uStack00000010,uStack00000014);
  lVar4 = lVar4 >> 0xf;
  if (((int)((ulonglong)lVar4 >> 0x20) < 1) && (lVar4 < 0)) {
    lVar4 = 0;
  }
  uVar3 = __alldiv(*(uint *)(unaff_EBP + 0xc) << 0xf,
                   *(int *)(unaff_EBP + 0x10) << 0xf | *(uint *)(unaff_EBP + 0xc) >> 0x11,
                   DAT_00f0aac8,DAT_00f0aacc);
  lVar5 = __allmul(uVar3,DAT_00f0aac8,DAT_00f0aacc);
  if (0 < lVar5 >> 0xf) {
    uVar3 = __alldiv(lVar4 << 0xf,lVar5 >> 0xf);
    *(int *)(unaff_EBX + 8) = (int)uVar3;
    **(longlong **)(unaff_EBP + 8) = lVar4;
    *(int *)(unaff_EBX + 0xc) = (int)((ulonglong)uVar3 >> 0x20);
    return;
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

