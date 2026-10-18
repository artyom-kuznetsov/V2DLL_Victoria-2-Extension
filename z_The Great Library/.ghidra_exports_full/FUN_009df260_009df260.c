// FUN_009df260 @ 009df260 body=[[009df260, 009df2a4]]


/* WARNING: Removing unreachable block (ram,0x009df299) */

void FUN_009df260(undefined4 *param_1)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  *(undefined1 *)(unaff_ESI + 0x88) = 1;
  puVar1 = *(undefined4 **)(unaff_ESI + 0xe0);
  if ((param_1 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 **)(unaff_ESI + 0xe0) = param_1;
  return;
}

