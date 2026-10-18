// FUN_00a926b0 @ 00a926b0 body=[[00a926b0, 00a928a5]]


uint FUN_00a926b0(int param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int in_EAX;
  uint uVar5;
  int in_ECX;
  uint uVar6;
  int unaff_EDI;
  bool bVar7;
  
  bVar7 = *(byte *)(param_1 + unaff_EDI) < *(byte *)(in_EAX + unaff_EDI);
  if ((((((*(byte *)(param_1 + unaff_EDI) == *(byte *)(in_EAX + unaff_EDI)) &&
         (bVar1 = *(byte *)(in_EAX + 1 + unaff_EDI), bVar2 = *(byte *)(param_1 + 1 + unaff_EDI),
         bVar7 = bVar2 < bVar1, bVar2 == bVar1)) &&
        (bVar1 = *(byte *)(in_EAX + 2 + unaff_EDI), bVar2 = *(byte *)(param_1 + 2 + unaff_EDI),
        bVar7 = bVar2 < bVar1, bVar2 == bVar1)) &&
       ((bVar1 = *(byte *)(in_EAX + 3 + unaff_EDI), bVar2 = *(byte *)(param_1 + 3 + unaff_EDI),
        bVar7 = bVar2 < bVar1, bVar2 == bVar1 &&
        (bVar1 = *(byte *)(in_EAX + 4 + unaff_EDI), bVar2 = *(byte *)(param_1 + 4 + unaff_EDI),
        bVar7 = bVar2 < bVar1, bVar2 == bVar1)))) &&
      (bVar1 = *(byte *)(in_EAX + 5 + unaff_EDI), bVar2 = *(byte *)(param_1 + 5 + unaff_EDI),
      bVar7 = bVar2 < bVar1, bVar2 == bVar1)) &&
     (((bVar1 = *(byte *)(in_EAX + 6 + unaff_EDI), bVar2 = *(byte *)(param_1 + 6 + unaff_EDI),
       bVar7 = bVar2 < bVar1, bVar2 == bVar1 &&
       (bVar1 = *(byte *)(in_EAX + 7 + unaff_EDI), bVar2 = *(byte *)(param_1 + 7 + unaff_EDI),
       bVar7 = bVar2 < bVar1, bVar2 == bVar1)) &&
      ((bVar1 = *(byte *)(in_EAX + 8 + unaff_EDI), bVar2 = *(byte *)(param_1 + 8 + unaff_EDI),
       bVar7 = bVar2 < bVar1, bVar2 == bVar1 &&
       (((bVar1 = *(byte *)(in_EAX + 9 + unaff_EDI), bVar2 = *(byte *)(param_1 + 9 + unaff_EDI),
         bVar7 = bVar2 < bVar1, bVar2 == bVar1 &&
         (bVar1 = *(byte *)(in_EAX + 10 + unaff_EDI), bVar2 = *(byte *)(param_1 + 10 + unaff_EDI),
         bVar7 = bVar2 < bVar1, bVar2 == bVar1)) &&
        (bVar1 = *(byte *)(in_EAX + 0xb + unaff_EDI), bVar2 = *(byte *)(param_1 + 0xb + unaff_EDI),
        bVar7 = bVar2 < bVar1, bVar2 == bVar1)))))))) {
    uVar5 = in_EAX + 0xc;
    uVar6 = param_1 + 0xc;
    param_1 = param_2 + 8;
    while ((((bVar7 = *(byte *)(uVar6 + unaff_EDI) < *(byte *)(uVar5 + unaff_EDI),
             *(byte *)(uVar6 + unaff_EDI) == *(byte *)(uVar5 + unaff_EDI) &&
             (uVar3 = *(ushort *)(in_ECX + uVar5 * 2), uVar4 = *(ushort *)(in_ECX + uVar6 * 2),
             bVar7 = uVar4 < uVar3, uVar4 == uVar3)) &&
            ((bVar1 = *(byte *)(uVar5 + 1 + unaff_EDI), bVar2 = *(byte *)(uVar6 + 1 + unaff_EDI),
             bVar7 = bVar2 < bVar1, bVar2 == bVar1 &&
             ((uVar3 = *(ushort *)(in_ECX + 2 + uVar5 * 2),
              uVar4 = *(ushort *)(in_ECX + 2 + uVar6 * 2), bVar7 = uVar4 < uVar3, uVar4 == uVar3 &&
              (bVar1 = *(byte *)(uVar5 + 2 + unaff_EDI), bVar2 = *(byte *)(uVar6 + 2 + unaff_EDI),
              bVar7 = bVar2 < bVar1, bVar2 == bVar1)))))) &&
           (((uVar3 = *(ushort *)(in_ECX + 4 + uVar5 * 2),
             uVar4 = *(ushort *)(in_ECX + 4 + uVar6 * 2), bVar7 = uVar4 < uVar3, uVar4 == uVar3 &&
             (((bVar1 = *(byte *)(uVar5 + 3 + unaff_EDI), bVar2 = *(byte *)(uVar6 + 3 + unaff_EDI),
               bVar7 = bVar2 < bVar1, bVar2 == bVar1 &&
               (uVar3 = *(ushort *)(in_ECX + 6 + uVar5 * 2),
               uVar4 = *(ushort *)(in_ECX + 6 + uVar6 * 2), bVar7 = uVar4 < uVar3, uVar4 == uVar3))
              && (bVar1 = *(byte *)(uVar5 + 4 + unaff_EDI), bVar2 = *(byte *)(uVar6 + 4 + unaff_EDI)
                 , bVar7 = bVar2 < bVar1, bVar2 == bVar1)))) &&
            (((((uVar3 = *(ushort *)(in_ECX + 8 + uVar5 * 2),
                uVar4 = *(ushort *)(in_ECX + 8 + uVar6 * 2), bVar7 = uVar4 < uVar3, uVar4 == uVar3
                && (bVar1 = *(byte *)(uVar5 + 5 + unaff_EDI),
                   bVar2 = *(byte *)(uVar6 + 5 + unaff_EDI), bVar7 = bVar2 < bVar1, bVar2 == bVar1))
               && ((uVar3 = *(ushort *)(in_ECX + 10 + uVar5 * 2),
                   uVar4 = *(ushort *)(in_ECX + 10 + uVar6 * 2), bVar7 = uVar4 < uVar3,
                   uVar4 == uVar3 &&
                   ((bVar1 = *(byte *)(uVar5 + 6 + unaff_EDI),
                    bVar2 = *(byte *)(uVar6 + 6 + unaff_EDI), bVar7 = bVar2 < bVar1, bVar2 == bVar1
                    && (uVar3 = *(ushort *)(in_ECX + 0xc + uVar5 * 2),
                       uVar4 = *(ushort *)(in_ECX + 0xc + uVar6 * 2), bVar7 = uVar4 < uVar3,
                       uVar4 == uVar3)))))) &&
              (bVar1 = *(byte *)(uVar5 + 7 + unaff_EDI), bVar2 = *(byte *)(uVar6 + 7 + unaff_EDI),
              bVar7 = bVar2 < bVar1, bVar2 == bVar1)) &&
             (uVar3 = *(ushort *)(in_ECX + 0xe + uVar5 * 2),
             uVar4 = *(ushort *)(in_ECX + 0xe + uVar6 * 2), bVar7 = uVar4 < uVar3, uVar4 == uVar3)))
            )))) {
      uVar5 = uVar5 + 8;
      uVar6 = uVar6 + 8;
      if (param_2 <= uVar5) {
        uVar5 = uVar5 - param_2;
      }
      if (param_2 <= uVar6) {
        uVar6 = uVar6 - param_2;
      }
      *param_3 = *param_3 + -1;
      param_1 = param_1 + -8;
      if (param_1 < 0) {
        return uVar5 & 0xffffff00;
      }
    }
  }
  return (uint)bVar7;
}

