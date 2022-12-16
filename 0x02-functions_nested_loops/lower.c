ISALPHAL(i3n)ux Programmer's MaInSuAaLlPHA(3)

NNAAMMEE
       isalnum,   isalpha,  isascii,
       isblank,  iscntrl,   isdigit,
       isgraph,   islower,  isprint,
       ispunct,  isspace,   isupper,
       isxdigit,   isalnum_l,  isal‐
       pha_l, isascii_l,  isblank_l,
       iscntrl_l,   isdigit_l,   is‐
       graph_l,    islower_l,    is‐
       print_l,    ispunct_l,   iss‐
       pace_l, isupper_l, isxdigit_l
       -   character  classification
       functions

SSYYNNOOPPSSIISS
       ##iinncclluuddee <<ccttyyppee..hh>>

       iinntt iissaallnnuumm((iinntt _c));;
       iinntt iissaallpphhaa((iinntt _c));;
       iinntt iissccnnttrrll((iinntt _c));;
       iinntt iissddiiggiitt((iinntt _c));;
       iinntt iissggrraapphh((iinntt _c));;
       iinntt iisslloowweerr((iinntt _c));;
       iinntt iisspprriinntt((iinntt _c));;
       iinntt iissppuunncctt((iinntt _c));;
       iinntt iissssppaaccee((iinntt _c));;
       iinntt iissuuppppeerr((iinntt _c));;
       iinntt iissxxddiiggiitt((iinntt _c));;

       iinntt iissaasscciiii((iinntt _c));;
       iinntt iissbbllaannkk((iinntt _c));;

       iinntt iissaallnnuumm__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissaallpphhaa__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissbbllaannkk__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissccnnttrrll__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissddiiggiitt__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissggrraapphh__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iisslloowweerr__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iisspprriinntt__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissppuunncctt__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissssppaaccee__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissuuppppeerr__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;
       iinntt iissxxddiiggiitt__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;

       iinntt iissaasscciiii__ll((iinntt _c,, llooccaallee__tt _l_o_c_a_l_e));;

   Feature Test  Macro  Requirements
   for      glibc      (see     ffeeaa‐‐
   ttuurree__tteesstt__mmaaccrrooss(7)):

       iissaasscciiii():
           _XOPEN_SOURCE
               || /* Glibc since
           2.19: */ _DEFAULT_SOURCE
               || /* Glibc versions
           <= 2.19: */ _SVID_SOURCE

       iissbbllaannkk():
           _ISOC99_SOURCE ||
           _POSIX_C_SOURCE >= 200112L

       iissaallnnuumm__ll(), iissaallpphhaa__ll(), iiss‐‐
       bbllaannkk__ll(), iissccnnttrrll__ll(), iiss‐‐
       ddiiggiitt__ll(), iissggrraapphh__ll(), iiss‐‐
       lloowweerr__ll(), iisspprriinntt__ll(), iiss‐‐
       ppuunncctt__ll(), iissssppaaccee__ll(), iissuupp‐‐
       ppeerr__ll(), iissxxddiiggiitt__ll():
           Since glibc 2.10:
                  _XOPEN_SOURCE >= 700
           Before glibc 2.10:
                  _GNU_SOURCE

       iissaasscciiii__ll():
           Since glibc 2.10:
                  _XOPEN_SOURCE >= 700
                  && (_SVID_SOURCE
                  || _BSD_SOURCE)
           Before glibc 2.10:
                  _GNU_SOURCE

DDEESSCCRRIIPPTTIIOONN
       These functions check whether
       _c,  which must have the value
       of an _u_n_s_i_g_n_e_d _c_h_a_r  or  EEOOFF,
       falls  into a certain charac‐
       ter class  according  to  the
       specified  locale.  The func‐
       tions without the "_l" suffix
       perform  the  check  based on
       the current locale.

       The functions with  the  "_l"
       suffix   perform   the  check
       based on the locale specified
       by  the locale object _l_o_c_a_l_e.
       The behavior of  these  func‐
       tions  is undefined if _l_o_c_a_l_e
       is the special locale  object
       LLCC__GGLLOOBBAALL__LLOOCCAALLEE  (see dduupplloo‐‐
       ccaallee(3)) or is  not  a  valid
       locale object handle.

       The  list  below explains the
       operation  of  the  functions
       without  the "_l" suffix; the
       functions with the "_l"  suf‐
       fix  differ only in using the
       locale object _l_o_c_a_l_e  instead
       of the current locale.

       iissaallnnuumm()
              checks for an alphanu‐
              meric character; it is
              equivalent  to  ((iissaall‐‐
              pphhaa((_c)) |||| iissddiiggiitt((_c)))).

       iissaallpphhaa()
              checks for  an  alpha‐
              betic   character;  in
              the standard  ""CC""  lo‐
              cale, it is equivalent
              to ((iissuuppppeerr((_c)) ||||  iiss‐‐
              lloowweerr((_c)))).    In  some
              locales, there may  be
              additional  characters
              for which iissaallpphhaa() is
              true—letters which are
              neither uppercase  nor
              lowercase.

       iissaasscciiii()
              checks  whether _c is a
              7-bit  _u_n_s_i_g_n_e_d   _c_h_a_r
              value  that  fits into
              the  ASCII   character
              set.

       iissbbllaannkk()
              checks   for  a  blank
              character; that is,  a
              space or a tab.

       iissccnnttrrll()
              checks  for  a control
              character.

       iissddiiggiitt()
              checks for a digit  (0
              through 9).

       iissggrraapphh()
              checks  for any print‐
              able character  except
              space.

       iisslloowweerr()
              checks for a lowercase
              character.

       iisspprriinntt()
              checks for any  print‐
              able character includ‐
              ing space.

       iissppuunncctt()
              checks for any  print‐
              able  character  which
              is not a space  or  an
              alphanumeric   charac‐
              ter.

       iissssppaaccee()
              checks for white-space
              characters.    In  the
              ""CC""  and  ""PPOOSSIIXX""  lo‐
              cales,    these   are:
              space,       form-feed
              (''\\ff''),        newline
              (''\\nn''),  carriage  re‐
              turn  (''\\rr''), horizon‐
              tal  tab  (''\\tt''),  and
              vertical tab (''\\vv'').

       iissuuppppeerr()
              checks  for  an upper‐
              case letter.

       iissxxddiiggiitt()
              checks for hexadecimal
              digits,  that  is, one
              of
              00 11 22 33 44 55 66 77 88 99  aa
              bb cc dd ee ff AA BB CC DD EE FF.

RREETTUURRNN VVAALLUUEE
       The  values returned are non‐
       zero if the character _c falls
       into  the  tested  class, and
       zero if not.

VVEERRSSIIOONNSS
       iissaallnnuumm__ll(), iissaallpphhaa__ll(), iiss‐‐
       bbllaannkk__ll(),  iissccnnttrrll__ll(),  iiss‐‐
       ddiiggiitt__ll(),  iissggrraapphh__ll(),  iiss‐‐
       lloowweerr__ll(),  iisspprriinntt__ll(),  iiss‐‐
       ppuunncctt__ll(), iissssppaaccee__ll(), iissuupp‐‐
       ppeerr__ll(),   iissxxddiiggiitt__ll(),  and
       iissaasscciiii__ll()   are   available
       since glibc 2.3.

AATTTTRRIIBBUUTTEESS
       For  an  explanation  of  the
       terms used in  this  section,
       see aattttrriibbuutteess(7).

       ┌─────────────────────────────────┬───────────────┬─────────┐
       │IInntteerrffaaccee                        │ AAttttrriibbuuttee     │ VVaalluuee   │
       ├─────────────────────────────────┼───────────────┼─────────┤
       │iissaallnnuumm(), iissaallpphhaa(), iissaasscciiii(), │ Thread safety │ MT-Safe │
       │iissbbllaannkk(), iissccnnttrrll(), iissddiiggiitt(), │               │         │
       │iissggrraapphh(), iisslloowweerr(), iisspprriinntt(), │               │         │
       │iissppuunncctt(), iissssppaaccee(), iissuuppppeerr(), │               │         │
       │iissxxddiiggiitt()                       │               │         │
       └─────────────────────────────────┴───────────────┴─────────┘
CCOONNFFOORRMMIINNGG TTOO
       C89    specifies   iissaallnnuumm(),
       iissaallpphhaa(),   iissccnnttrrll(),   iiss‐‐
       ddiiggiitt(),    iissggrraapphh(),    iiss‐‐
       lloowweerr(),    iisspprriinntt(),    iiss‐‐
       ppuunncctt(),   iissssppaaccee(),   iissuupp‐‐
       ppeerr(),  and  iissxxddiiggiitt(),  but
       not  iissaasscciiii() and iissbbllaannkk().
       POSIX.1-2001  also  specifies
       those   functions,  and  also
       iissaasscciiii() (as an  XSI  exten‐
       sion)   and  iissbbllaannkk().   C99
       specifies all of the  preced‐
       ing  functions,  except iissaass‐‐
       cciiii().

       POSIX.1-2008 marks  iissaasscciiii()
       as  obsolete,  noting that it
       cannot be used portably in  a
       localized application.

       POSIX.1-2008  specifies iissaall‐‐
       nnuumm__ll(),   iissaallpphhaa__ll(),   iiss‐‐
       bbllaannkk__ll(),  iissccnnttrrll__ll(),  iiss‐‐
       ddiiggiitt__ll(),  iissggrraapphh__ll(),  iiss‐‐
       lloowweerr__ll(),  iisspprriinntt__ll(),  iiss‐‐
       ppuunncctt__ll(), iissssppaaccee__ll(), iissuupp‐‐
       ppeerr__ll(), and iissxxddiiggiitt__ll().

       iissaasscciiii__ll()  is  a GNU exten‐
       sion.

NNOOTTEESS
       The  standards  require  that
       the   argument  _c  for  these
       functions is either EEOOFF or  a
       value  that  is representable
       in the  type  _u_n_s_i_g_n_e_d  _c_h_a_r.
       If  the argument _c is of type
       _c_h_a_r, it must be cast to  _u_n_‐
       _s_i_g_n_e_d  _c_h_a_r,  as in the fol‐
       lowing example:

           char c;
           ...
           res = toupper((unsigned char) c);

       This  is  necessary   because
       _c_h_a_r may be the equivalent of
       _s_i_g_n_e_d _c_h_a_r, in which case  a
       byte where the top bit is set
       would be sign  extended  when
       converting to _i_n_t, yielding a
       value  that  is  outside  the
       range of _u_n_s_i_g_n_e_d _c_h_a_r.

       The  details  of what charac‐
       ters belong  to  which  class
       depend  on  the  locale.  For
       example, iissuuppppeerr()  will  not
       recognize  an A-umlaut (Ä) as
       an uppercase  letter  in  the
       default CC locale.

SSEEEE AALLSSOO
       iisswwaallnnuumm(3),     iisswwaallpphhaa(3),
       iisswwbbllaannkk(3),     iisswwccnnttrrll(3),
       iisswwddiiggiitt(3),     iisswwggrraapphh(3),
       iisswwlloowweerr(3),     iisswwpprriinntt(3),
       iisswwppuunncctt(3),     iisswwssppaaccee(3),
       iisswwuuppppeerr(3),    iisswwxxddiiggiitt(3),
       nneewwllooccaallee(3),   sseettllooccaallee(3),
       ttooaasscciiii(3), ttoolloowweerr(3), ttoouupp‐‐
       ppeerr(3),         uusseellooccaallee(3),
       aasscciiii(7), llooccaallee(7)

CCOOLLOOPPHHOONN
       This page is part of  release
       5.05  of  the Linux _m_a_n_-_p_a_g_e_s
       project.   A  description  of
       the    project,   information
       about reporting bugs, and the
       latest  version of this page,
       can     be      found      at
       https://www.kernel.org/doc/man-pages/.

GNU          2017-09-15   ISALPHA(3)
