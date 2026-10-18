// FUN_00aadf9c @ 00aadf9c body=[[00aadf9c, 00aadfdb]]


void FUN_00aadf9c(void)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  LONG *Target;
  
  Target = (LONG *)&DAT_00f1fa18;
  do {
    _Memory = (undefined4 *)InterlockedExchange(Target,0);
    while (_Memory != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*_Memory;
      __free_locale((_locale_t)_Memory[2]);
      _free(_Memory);
      _Memory = puVar1;
    }
    Target = Target + 1;
  } while ((int)Target < 0xf1fb10);
  return;
}

