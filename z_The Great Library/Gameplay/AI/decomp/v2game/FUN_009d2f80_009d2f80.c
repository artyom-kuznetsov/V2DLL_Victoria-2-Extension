// FUN_009d2f80 @ 009d2f80 body=[[009d2f80, 009d2fd6] [009d2fda, 009d3004] [009d3008, 009d3081]]


int FUN_009d2f80(int param_1)

{
  char cVar1;
  int *piVar2;
  int unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(unaff_ESI + 0xd4) != 4) {
    ExceptionList = &local_10;
    FUN_009d2aa0(local_2c);
    local_8 = 0;
    cVar1 = FUN_00416db0();
    if (cVar1 == '\0') {
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      ExceptionList = local_10;
      return 5;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if (param_1 != 1) {
    ExceptionList = local_10;
    return 4;
  }
  piVar2 = (int *)SteamApps();
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x1c))(*(undefined4 *)(unaff_ESI + 0xd8));
    ExceptionList = local_10;
    return (-(uint)(cVar1 != '\0') & 0xfffffffc) + 4;
  }
  ExceptionList = local_10;
  return 1;
}

