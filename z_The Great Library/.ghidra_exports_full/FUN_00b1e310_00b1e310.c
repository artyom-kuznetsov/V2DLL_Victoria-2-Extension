// FUN_00b1e310 @ 00b1e310 body=[[00b1e310, 00b1e4d1]]


/* WARNING: Removing unreachable block (ram,0x00b1e487) */

undefined4 FUN_00b1e310(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 unaff_BL;
  int unaff_EDI;
  undefined1 uStack_34;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 local_c [8];
  undefined1 auStack_4 [4];
  
  iStack_18 = 4;
  uStack_1c = local_c;
  iVar3 = (**(code **)(*param_1 + 8))();
  if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_1 + 8))(auStack_4,4), iVar3 != 0)) {
    piVar4 = &iStack_18;
    iVar3 = (**(code **)(*param_1 + 8))(piVar4);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*param_1 + 8))();
      if (iVar3 != 0) {
        if (unaff_EDI == 1) {
          piVar4 = (int *)CONCAT13((char)piVar4,
                                   CONCAT12((char)((uint)piVar4 >> 8),
                                            CONCAT11((char)((uint)piVar4 >> 0x10),
                                                     (char)((uint)piVar4 >> 0x18))));
          uVar1 = (undefined1)uStack_1c;
          uVar2 = uStack_1c._1_1_;
          uStack_1c._0_2_ = CONCAT11(uStack_1c._2_1_,uStack_1c._3_1_);
          uStack_1c = (undefined1 *)CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)uStack_1c));
        }
        uStack_34 = SUB41(&uStack_1c,0);
        piVar4 = (int *)FUN_00b1e0c0(piVar4,1);
        iVar3 = iStack_18;
        if (piVar4 == (int *)0x0) {
          FUN_00b19cc0(uStack_1c);
          (**(code **)(*param_1 + 8))(*(undefined4 *)(iVar3 + 4),uStack_1c);
          *(undefined1 *)(iVar3 + 0x14) = uStack_34;
          *(undefined1 *)(iVar3 + 0x15) = 4;
          return 1;
        }
        (**(code **)(*piVar4 + 4))(param_1,iStack_18,unaff_EDI);
        *(undefined1 *)(iVar3 + 0x14) = unaff_BL;
        *(undefined1 *)(iVar3 + 0x15) = uStack_34;
        return 1;
      }
    }
  }
  return 0;
}

