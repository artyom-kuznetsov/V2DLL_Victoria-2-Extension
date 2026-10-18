// FUN_00996520 @ 00996520 body=[[00996520, 00996630] [00996634, 0099665c] [00996660, 0099669f]]


/* WARNING: Removing unreachable block (ram,0x00996653) */
/* WARNING: Removing unreachable block (ram,0x00996627) */

int * FUN_00996520(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b63450;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  piVar2 = (int *)FUN_005c2ad0(param_1);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x5c))
                            (CONCAT22((short)*(undefined4 *)(in_ECX + 0x6b9c0),
                                      (short)*(undefined4 *)(in_ECX + 0x6b9bc)));
  FUN_0068f390();
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    FUN_00409350(&DAT_00ded94d,0);
    puStack_10 = (undefined1 *)0x0;
    FUN_00409350(&DAT_00ded94d,0);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
    (**(code **)(*piVar2 + 0xf0))();
    puStack_10 = (undefined1 *)0xffffffff;
  }
  if (param_2 == 0) {
    param_2 = in_ECX + 0x6b9e0;
  }
  (**(code **)(*piVar2 + 0x74))(param_2);
  ExceptionList = pvStack_1c;
  return piVar2;
}

