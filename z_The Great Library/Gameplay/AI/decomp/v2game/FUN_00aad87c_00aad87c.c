// ~_Locimp @ 00aad87c body=[[00aad87c, 00aad8be]]


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual __thiscall std::locale::_Locimp::~_Locimp(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this)

{
  *(undefined ***)this = vftable;
  _Locimp_dtor(this);
  if (*(void **)(this + 0x18) != (void *)0x0) {
    _free(*(void **)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = facet::vftable;
  return;
}

