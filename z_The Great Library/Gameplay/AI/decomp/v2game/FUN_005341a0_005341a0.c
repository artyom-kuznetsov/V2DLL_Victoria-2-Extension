// FUN_005341a0 @ 005341a0 body=[[005341a0, 005341e9]]


void FUN_005341a0(int param_1)

{
  int unaff_ESI;
  
  if (0 < param_1) {
    param_1 = __alldiv((longlong)(*(int *)(*(int *)(unaff_ESI + 0xbcc) + 0x288) + 1000) *
                       (longlong)param_1,1000,0);
  }
  *(int *)(unaff_ESI + 0xea0) = *(int *)(unaff_ESI + 0xea0) + param_1;
  if (*(int *)(unaff_ESI + 0xea0) < 0) {
    *(undefined4 *)(unaff_ESI + 0xea0) = 0;
  }
  return;
}

