// FUN_00a294f0 @ 00a294f0 body=[[00a294f0, 00a2969d]]


void FUN_00a294f0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_114 [28];
  int local_f8 [57];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b63536;
  local_14 = ExceptionList;
  if (*(char *)(in_ECX + 0x4c) == '\0') {
    ExceptionList = &local_14;
    uVar1 = FUN_009bcbf0(in_ECX + 0x78,1);
    *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 1;
    *(uint *)(in_ECX + 0x16c) = uVar1;
    if (*(int *)(in_ECX + 0x48) == 1) {
      if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(uVar1 * 0x2c + 0x15c + *(int *)(in_ECX + 0x58));
      }
      *(int **)(in_ECX + 0x168) = piVar4;
      if (uVar1 < 10000) {
        uVar2 = *(undefined4 *)(uVar1 * 0x2c + 0x180 + *(int *)(in_ECX + 0x58));
        uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x17c + *(int *)(in_ECX + 0x58));
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
      }
      *(undefined4 *)(in_ECX + 0xa4) = uVar3;
      *(undefined4 *)(in_ECX + 0xa8) = uVar2;
      if ((piVar4 != (int *)0x0) &&
         ((((**(code **)(*piVar4 + 0x44))(piVar4,0,local_f8), local_f8[0] == 0x31545844 ||
           (local_f8[0] == 0x35545844)) && (*(char *)(in_ECX + 0x170) != '\0')))) {
        FUN_009885d0();
        iStack_c = 0;
        FUN_004015b0(auStack_114,0x1d0,0x1000);
        iStack_c._0_1_ = 1;
        uVar2 = FUN_00987d20();
        piVar4 = (int *)(in_ECX + 0x78);
        if (0xf < *(uint *)(in_ECX + 0x8c)) {
          piVar4 = (int *)*piVar4;
        }
        uVar2 = FUN_00418e30(uVar2,piVar4);
        uVar2 = FUN_00418e30(uVar2," have forbidden compression, have you tried DXT3?");
        FUN_00401280(uVar2);
        iStack_c = (uint)iStack_c._1_3_ << 8;
        FUN_00401650();
        FUN_00408ad0();
        *(undefined1 *)(in_ECX + 0x170) = 0;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

