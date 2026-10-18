// FUN_00a6b230 @ 00a6b230 body=[[00a6b230, 00a6b297]]


void FUN_00a6b230(uint param_1,int param_2)

{
  uint *unaff_ESI;
  int iVar1;
  undefined4 local_8;
  
  iVar1 = 1;
  local_8 = 1;
  do {
    if (iVar1 < 0x11) {
      do {
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      iVar1 = iVar1 * 2;
      local_8 = iVar1;
    }
    else {
      SwitchToThread();
    }
    if ((*unaff_ESI & 1) != 0) {
      LOCK();
      *(int *)(param_2 + 0x108) = *(int *)(param_2 + 0x108) + 1;
      UNLOCK();
      tbb::internal::throw_exception_v4(2);
    }
  } while (*unaff_ESI != param_1);
  return;
}

