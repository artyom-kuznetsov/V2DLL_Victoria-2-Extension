// FUN_008616a0 @ 008616a0 body=[[008616a0, 008617ae] [008617b2, 008617dd] [008617e1, 00861814] [00861818, 00861840] [00861844, 0086186a] [0086186e, 00861894] [00861898, 00861921] [00861925, 0086195d] [00861961, 008619c0] [008619c4, 008619e8]]


void FUN_008616a0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c6f3;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CTutorialPage::vftable;
  local_8 = 0x17;
  if ((param_1[0x1d4] != 0) && (DAT_01258a80 != 0)) {
    piVar1 = *(int **)(DAT_01258a80 + 0x60);
    piVar6 = (int *)(param_1[0x1d4] + 0x18);
    piVar3 = *(int **)(DAT_01258a80 + 0x5c);
    if (piVar3 != piVar1) {
      do {
        if ((int *)*piVar3 == piVar6) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar1);
      if (piVar3 != piVar1) {
        (**(code **)(*piVar6 + 0x38))();
        (**(code **)(*(int *)param_1[0x1d4] + 0x50))();
      }
    }
  }
  iVar5 = DAT_01258a80;
  param_1[0x1d4] = 0;
  piVar6 = param_1 + 0x1bf;
  local_14 = 10;
  do {
    if ((*piVar6 != 0) && (iVar5 != 0)) {
      piVar3 = *(int **)(iVar5 + 0x60);
      piVar1 = (int *)(*piVar6 + 0x18);
      piVar4 = *(int **)(iVar5 + 0x5c);
      if (piVar4 != piVar3) {
        do {
          if ((int *)*piVar4 == piVar1) break;
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar3);
        if (piVar4 != piVar3) {
          (**(code **)(*piVar1 + 0x38))();
          (**(code **)(*(int *)*piVar6 + 0x50))();
          iVar5 = DAT_01258a80;
          *piVar6 = 0;
        }
      }
    }
    piVar6 = piVar6 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      if ((undefined4 *)param_1[0x130] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x130])(1);
        iVar5 = DAT_01258a80;
      }
      *(undefined1 *)(iVar5 + 0x11) = 0;
      if (0xf < (uint)param_1[0x248]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x243]);
      }
      param_1[0x248] = 0xf;
      param_1[0x247] = 0;
      *(undefined1 *)(param_1 + 0x243) = 0;
      if (param_1[0x23c] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x23c]);
      }
      param_1[0x23c] = 0;
      param_1[0x23d] = 0;
      param_1[0x23e] = 0;
      FUN_004097a0(param_1 + 0x238);
      if (0xf < (uint)param_1[0x236]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x231]);
      }
      param_1[0x236] = 0xf;
      param_1[0x235] = 0;
      *(undefined1 *)(param_1 + 0x231) = 0;
      if (0xf < (uint)param_1[0x22f]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x22a]);
      }
      param_1[0x22f] = 0xf;
      param_1[0x22e] = 0;
      *(undefined1 *)(param_1 + 0x22a) = 0;
      if (0xf < (uint)param_1[0x228]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x223]);
      }
      param_1[0x228] = 0xf;
      param_1[0x227] = 0;
      *(undefined1 *)(param_1 + 0x223) = 0;
      if (0xf < (uint)param_1[0x220]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x21b]);
      }
      param_1[0x220] = 0xf;
      param_1[0x21f] = 0;
      *(undefined1 *)(param_1 + 0x21b) = 0;
      param_1[0x20c] = CButtonObserver::vftable;
      param_1[0x201] = CButtonObserver::vftable;
      param_1[0x1f6] = CButtonObserver::vftable;
      param_1[0x1eb] = CButtonObserver::vftable;
      param_1[0x1e0] = CButtonObserver::vftable;
      param_1[0x1d5] = CButtonObserver::vftable;
      param_1[0x1cb] = CTrigger::vftable;
      local_8._0_1_ = 0x18;
      iVar5 = (int)(param_1[0x1ce] - param_1[0x1cd]) >> 2;
      local_14 = 0;
      if (0 < iVar5) {
        do {
          puVar2 = *(undefined4 **)(param_1[0x1cd] + local_14 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          local_14 = local_14 + 1;
        } while (local_14 < iVar5);
      }
      if (param_1[0x1cd] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x1cd]);
      }
      param_1[0x1cd] = 0;
      param_1[0x1ce] = 0;
      param_1[0x1cf] = 0;
      local_8._0_1_ = 8;
      _eh_vector_destructor_iterator_(param_1 + 0x131,0x38,10,FUN_00861650);
      if (0xf < (uint)param_1[0x12e]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x129]);
      }
      param_1[0x12e] = 0xf;
      param_1[0x12d] = 0;
      *(undefined1 *)(param_1 + 0x129) = 0;
      local_8._0_1_ = 6;
      _eh_vector_destructor_iterator_(param_1 + 0xbb,0x1c,10,FUN_00408ad0);
      local_8 = CONCAT31(local_8._1_3_,5);
      _eh_vector_destructor_iterator_(param_1 + 0x75,0x1c,10,FUN_00408ad0);
      if (0xf < (uint)param_1[0x71]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x6c]);
      }
      param_1[0x71] = 0xf;
      param_1[0x70] = 0;
      *(undefined1 *)(param_1 + 0x6c) = 0;
      FUN_00868540();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[99]);
    }
  } while( true );
}

