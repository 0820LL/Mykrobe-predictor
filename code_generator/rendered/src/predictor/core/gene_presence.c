/*
 * Copyright 2014 Zamin Iqbal (zam@well.ox.ac.uk)
 *
 *  gene_presence.c
*/


#include "gene_presence.h"
#include "element.h"
#include "file_reader.h"
#include "build.h"
#include "db_differentiation.h"
#include "maths.h"
#include "string_buffer.h"

GenePresenceGene map_string_to_gene_presence_gene(StrBuf* sbuf)
{
  
  if(strcmp(sbuf->buff, "vgbA")==0)
    {
      return vgbA;
    }
  
  else if(strcmp(sbuf->buff, "aacAaphD")==0)
    {
      return aacAaphD;
    }
  
  else if(strcmp(sbuf->buff, "IsaB")==0)
    {
      return IsaB;
    }
  
  else if(strcmp(sbuf->buff, "aadEant6Ia")==0)
    {
      return aadEant6Ia;
    }
  
  else if(strcmp(sbuf->buff, "aadDaph4Ia")==0)
    {
      return aadDaph4Ia;
    }
  
  else if(strcmp(sbuf->buff, "qacB")==0)
    {
      return qacB;
    }
  
  else if(strcmp(sbuf->buff, "qacA")==0)
    {
      return qacA;
    }
  
  else if(strcmp(sbuf->buff, "cfr")==0)
    {
      return cfr;
    }
  
  else if(strcmp(sbuf->buff, "blaZ")==0)
    {
      return blaZ;
    }
  
  else if(strcmp(sbuf->buff, "lnuA")==0)
    {
      return lnuA;
    }
  
  else if(strcmp(sbuf->buff, "lnuB")==0)
    {
      return lnuB;
    }
  
  else if(strcmp(sbuf->buff, "ermB")==0)
    {
      return ermB;
    }
  
  else if(strcmp(sbuf->buff, "ermC")==0)
    {
      return ermC;
    }
  
  else if(strcmp(sbuf->buff, "ermA")==0)
    {
      return ermA;
    }
  
  else if(strcmp(sbuf->buff, "ermY")==0)
    {
      return ermY;
    }
  
  else if(strcmp(sbuf->buff, "mupB")==0)
    {
      return mupB;
    }
  
  else if(strcmp(sbuf->buff, "mupA")==0)
    {
      return mupA;
    }
  
  else if(strcmp(sbuf->buff, "aph2Ic")==0)
    {
      return aph2Ic;
    }
  
  else if(strcmp(sbuf->buff, "ant9Ia")==0)
    {
      return ant9Ia;
    }
  
  else if(strcmp(sbuf->buff, "ermT")==0)
    {
      return ermT;
    }
  
  else if(strcmp(sbuf->buff, "ant9Ib")==0)
    {
      return ant9Ib;
    }
  
  else if(strcmp(sbuf->buff, "aphA3aph3III")==0)
    {
      return aphA3aph3III;
    }
  
  else if(strcmp(sbuf->buff, "dfrA")==0)
    {
      return dfrA;
    }
  
  else if(strcmp(sbuf->buff, "vgaALC")==0)
    {
      return vgaALC;
    }
  
  else if(strcmp(sbuf->buff, "dfrC")==0)
    {
      return dfrC;
    }
  
  else if(strcmp(sbuf->buff, "dfrD")==0)
    {
      return dfrD;
    }
  
  else if(strcmp(sbuf->buff, "dfrG")==0)
    {
      return dfrG;
    }
  
  else if(strcmp(sbuf->buff, "mecC")==0)
    {
      return mecC;
    }
  
  else if(strcmp(sbuf->buff, "mecA")==0)
    {
      return mecA;
    }
  
  else if(strcmp(sbuf->buff, "dfrK")==0)
    {
      return dfrK;
    }
  
  else if(strcmp(sbuf->buff, "vgaB")==0)
    {
      return vgaB;
    }
  
  else if(strcmp(sbuf->buff, "vgaA")==0)
    {
      return vgaA;
    }
  
  else if(strcmp(sbuf->buff, "tetK")==0)
    {
      return tetK;
    }
  
  else if(strcmp(sbuf->buff, "tetM")==0)
    {
      return tetM;
    }
  
  else if(strcmp(sbuf->buff, "tetL")==0)
    {
      return tetL;
    }
  
  else if(strcmp(sbuf->buff, "tetO")==0)
    {
      return tetO;
    }
  
  else if(strcmp(sbuf->buff, "msrA")==0)
    {
      return msrA;
    }
  
  else if(strcmp(sbuf->buff, "mphC")==0)
    {
      return mphC;
    }
  
  else if(strcmp(sbuf->buff, "sat4")==0)
    {
      return sat4;
    }
  
  else if(strcmp(sbuf->buff, "cat")==0)
    {
      return cat;
    }
  
  else if(strcmp(sbuf->buff, "vanA")==0)
    {
      return vanA;
    }
  
  else if(strcmp(sbuf->buff, "vanC")==0)
    {
      return vanC;
    }
  
  else if(strcmp(sbuf->buff, "vanB")==0)
    {
      return vanB;
    }
  
  else if(strcmp(sbuf->buff, "fusB")==0)
    {
      return fusB;
    }
  
  else if(strcmp(sbuf->buff, "fusC")==0)
    {
      return fusC;
    }
  
  else if(strcmp(sbuf->buff, "str")==0)
    {
      return str;
    }
  
  else if(strcmp(sbuf->buff, "qacCsmr")==0)
    {
      return qacCsmr;
    }
  
  else if(strcmp(sbuf->buff, "arcA")==0)
    {
      return arcA;
    }
  
  else if(strcmp(sbuf->buff, "arcB")==0)
    {
      return arcB;
    }
  
  else if(strcmp(sbuf->buff, "arcC")==0)
    {
      return arcC;
    }
  
  else if(strcmp(sbuf->buff, "arcD")==0)
    {
      return arcD;
    }
  
  else if(strcmp(sbuf->buff, "ccrA")==0)
    {
      return ccrA;
    }
  
  else if(strcmp(sbuf->buff, "ccrB")==0)
    {
      return ccrB;
    }
  
  else if(strcmp(sbuf->buff, "ccrCa")==0)
    {
      return ccrCa;
    }
  
  else if(strcmp(sbuf->buff, "ccrCb")==0)
    {
      return ccrCb;
    }
  
  else if(strcmp(sbuf->buff, "ccrCc")==0)
    {
      return ccrCc;
    }
  
  else if(strcmp(sbuf->buff, "eta")==0)
    {
      return eta;
    }
  
  else if(strcmp(sbuf->buff, "etb")==0)
    {
      return etb;
    }
  
  else if(strcmp(sbuf->buff, "etd")==0)
    {
      return etd;
    }
  
  else if(strcmp(sbuf->buff, "luk")==0)
    {
      return luk;
    }
  
  else if(strcmp(sbuf->buff, "lukPVF")==0)
    {
      return lukPVF;
    }
  
  else if(strcmp(sbuf->buff, "lukPVS")==0)
    {
      return lukPVS;
    }
  
  else if(strcmp(sbuf->buff, "lukM")==0)
    {
      return lukM;
    }
  
  else if(strcmp(sbuf->buff, "lukMF")==0)
    {
      return lukMF;
    }
  
  else if(strcmp(sbuf->buff, "sasX")==0)
    {
      return sasX;
    }
  
  else if(strcmp(sbuf->buff, "sea")==0)
    {
      return sea;
    }
  
  else if(strcmp(sbuf->buff, "seb")==0)
    {
      return seb;
    }
  
  else if(strcmp(sbuf->buff, "sec")==0)
    {
      return sec;
    }
  
  else if(strcmp(sbuf->buff, "sed")==0)
    {
      return sed;
    }
  
  else if(strcmp(sbuf->buff, "see")==0)
    {
      return see;
    }
  
  else if(strcmp(sbuf->buff, "seg")==0)
    {
      return seg;
    }
  
  else if(strcmp(sbuf->buff, "seh")==0)
    {
      return seh;
    }
  
  else if(strcmp(sbuf->buff, "sei")==0)
    {
      return sei;
    }
  
  else if(strcmp(sbuf->buff, "sej")==0)
    {
      return sej;
    }
  
  else if(strcmp(sbuf->buff, "seu")==0)
    {
      return seu;
    }
  
  else if(strcmp(sbuf->buff, "selR")==0)
    {
      return selR;
    }
  
  else if(strcmp(sbuf->buff, "sep")==0)
    {
      return sep;
    }
  
  else if(strcmp(sbuf->buff, "tsst1")==0)
    {
      return tsst1;
    }
  
  else if(strcmp(sbuf->buff, "chp")==0)
    {
      return chp;
    }
  
  else if(strcmp(sbuf->buff, "sak")==0)
    {
      return sak;
    }
  
  else if(strcmp(sbuf->buff, "scn")==0)
    {
      return scn;
    }
  
  else 
    {
      die("Unknown gene %s\n", sbuf->buff);
    }

}


boolean map_gene_to_fasta(GenePresenceGene gene, StrBuf* fa, StrBuf* install_dir)
{
  strbuf_append_str(fa, install_dir->buff);
  strbuf_append_str(fa, "data/staph/antibiotics/");
  
  if(gene==vgbA)
    {
      strbuf_append_str(fa, "vgbA.fa");
    }
  
  else if(gene==aacAaphD)
    {
      strbuf_append_str(fa, "aacAaphD.fa");
    }
  
  else if(gene==IsaB)
    {
      strbuf_append_str(fa, "IsaB.fa");
    }
  
  else if(gene==aadEant6Ia)
    {
      strbuf_append_str(fa, "aadEant6Ia.fa");
    }
  
  else if(gene==aadDaph4Ia)
    {
      strbuf_append_str(fa, "aadDaph4Ia.fa");
    }
  
  else if(gene==qacB)
    {
      strbuf_append_str(fa, "qacB.fa");
    }
  
  else if(gene==qacA)
    {
      strbuf_append_str(fa, "qacA.fa");
    }
  
  else if(gene==cfr)
    {
      strbuf_append_str(fa, "cfr.fa");
    }
  
  else if(gene==blaZ)
    {
      strbuf_append_str(fa, "blaZ.fa");
    }
  
  else if(gene==lnuA)
    {
      strbuf_append_str(fa, "lnuA.fa");
    }
  
  else if(gene==lnuB)
    {
      strbuf_append_str(fa, "lnuB.fa");
    }
  
  else if(gene==ermB)
    {
      strbuf_append_str(fa, "ermB.fa");
    }
  
  else if(gene==ermC)
    {
      strbuf_append_str(fa, "ermC.fa");
    }
  
  else if(gene==ermA)
    {
      strbuf_append_str(fa, "ermA.fa");
    }
  
  else if(gene==ermY)
    {
      strbuf_append_str(fa, "ermY.fa");
    }
  
  else if(gene==mupB)
    {
      strbuf_append_str(fa, "mupB.fa");
    }
  
  else if(gene==mupA)
    {
      strbuf_append_str(fa, "mupA.fa");
    }
  
  else if(gene==aph2Ic)
    {
      strbuf_append_str(fa, "aph2Ic.fa");
    }
  
  else if(gene==ant9Ia)
    {
      strbuf_append_str(fa, "ant9Ia.fa");
    }
  
  else if(gene==ermT)
    {
      strbuf_append_str(fa, "ermT.fa");
    }
  
  else if(gene==ant9Ib)
    {
      strbuf_append_str(fa, "ant9Ib.fa");
    }
  
  else if(gene==aphA3aph3III)
    {
      strbuf_append_str(fa, "aphA3aph3III.fa");
    }
  
  else if(gene==dfrA)
    {
      strbuf_append_str(fa, "dfrA.fa");
    }
  
  else if(gene==vgaALC)
    {
      strbuf_append_str(fa, "vgaALC.fa");
    }
  
  else if(gene==dfrC)
    {
      strbuf_append_str(fa, "dfrC.fa");
    }
  
  else if(gene==dfrD)
    {
      strbuf_append_str(fa, "dfrD.fa");
    }
  
  else if(gene==dfrG)
    {
      strbuf_append_str(fa, "dfrG.fa");
    }
  
  else if(gene==mecC)
    {
      strbuf_append_str(fa, "mecC.fa");
    }
  
  else if(gene==mecA)
    {
      strbuf_append_str(fa, "mecA.fa");
    }
  
  else if(gene==dfrK)
    {
      strbuf_append_str(fa, "dfrK.fa");
    }
  
  else if(gene==vgaB)
    {
      strbuf_append_str(fa, "vgaB.fa");
    }
  
  else if(gene==vgaA)
    {
      strbuf_append_str(fa, "vgaA.fa");
    }
  
  else if(gene==tetK)
    {
      strbuf_append_str(fa, "tetK.fa");
    }
  
  else if(gene==tetM)
    {
      strbuf_append_str(fa, "tetM.fa");
    }
  
  else if(gene==tetL)
    {
      strbuf_append_str(fa, "tetL.fa");
    }
  
  else if(gene==tetO)
    {
      strbuf_append_str(fa, "tetO.fa");
    }
  
  else if(gene==msrA)
    {
      strbuf_append_str(fa, "msrA.fa");
    }
  
  else if(gene==mphC)
    {
      strbuf_append_str(fa, "mphC.fa");
    }
  
  else if(gene==sat4)
    {
      strbuf_append_str(fa, "sat4.fa");
    }
  
  else if(gene==cat)
    {
      strbuf_append_str(fa, "cat.fa");
    }
  
  else if(gene==vanA)
    {
      strbuf_append_str(fa, "vanA.fa");
    }
  
  else if(gene==vanC)
    {
      strbuf_append_str(fa, "vanC.fa");
    }
  
  else if(gene==vanB)
    {
      strbuf_append_str(fa, "vanB.fa");
    }
  
  else if(gene==fusB)
    {
      strbuf_append_str(fa, "fusB.fa");
    }
  
  else if(gene==fusC)
    {
      strbuf_append_str(fa, "fusC.fa");
    }
  
  else if(gene==str)
    {
      strbuf_append_str(fa, "str.fa");
    }
  
  else if(gene==qacCsmr)
    {
      strbuf_append_str(fa, "qacCsmr.fa");
    }
  
  else if(gene==arcA)
    {
      strbuf_append_str(fa, "arcA.fa");
    }
  
  else if(gene==arcB)
    {
      strbuf_append_str(fa, "arcB.fa");
    }
  
  else if(gene==arcC)
    {
      strbuf_append_str(fa, "arcC.fa");
    }
  
  else if(gene==arcD)
    {
      strbuf_append_str(fa, "arcD.fa");
    }
  
  else if(gene==ccrA)
    {
      strbuf_append_str(fa, "ccrA.fa");
    }
  
  else if(gene==ccrB)
    {
      strbuf_append_str(fa, "ccrB.fa");
    }
  
  else if(gene==ccrCa)
    {
      strbuf_append_str(fa, "ccrCa.fa");
    }
  
  else if(gene==ccrCb)
    {
      strbuf_append_str(fa, "ccrCb.fa");
    }
  
  else if(gene==ccrCc)
    {
      strbuf_append_str(fa, "ccrCc.fa");
    }
  
  else if(gene==eta)
    {
      strbuf_append_str(fa, "eta.fa");
    }
  
  else if(gene==etb)
    {
      strbuf_append_str(fa, "etb.fa");
    }
  
  else if(gene==etd)
    {
      strbuf_append_str(fa, "etd.fa");
    }
  
  else if(gene==luk)
    {
      strbuf_append_str(fa, "luk.fa");
    }
  
  else if(gene==lukPVF)
    {
      strbuf_append_str(fa, "lukPVF.fa");
    }
  
  else if(gene==lukPVS)
    {
      strbuf_append_str(fa, "lukPVS.fa");
    }
  
  else if(gene==lukM)
    {
      strbuf_append_str(fa, "lukM.fa");
    }
  
  else if(gene==lukMF)
    {
      strbuf_append_str(fa, "lukMF.fa");
    }
  
  else if(gene==sasX)
    {
      strbuf_append_str(fa, "sasX.fa");
    }
  
  else if(gene==sea)
    {
      strbuf_append_str(fa, "sea.fa");
    }
  
  else if(gene==seb)
    {
      strbuf_append_str(fa, "seb.fa");
    }
  
  else if(gene==sec)
    {
      strbuf_append_str(fa, "sec.fa");
    }
  
  else if(gene==sed)
    {
      strbuf_append_str(fa, "sed.fa");
    }
  
  else if(gene==see)
    {
      strbuf_append_str(fa, "see.fa");
    }
  
  else if(gene==seg)
    {
      strbuf_append_str(fa, "seg.fa");
    }
  
  else if(gene==seh)
    {
      strbuf_append_str(fa, "seh.fa");
    }
  
  else if(gene==sei)
    {
      strbuf_append_str(fa, "sei.fa");
    }
  
  else if(gene==sej)
    {
      strbuf_append_str(fa, "sej.fa");
    }
  
  else if(gene==seu)
    {
      strbuf_append_str(fa, "seu.fa");
    }
  
  else if(gene==selR)
    {
      strbuf_append_str(fa, "selR.fa");
    }
  
  else if(gene==sep)
    {
      strbuf_append_str(fa, "sep.fa");
    }
  
  else if(gene==tsst1)
    {
      strbuf_append_str(fa, "tsst1.fa");
    }
  
  else if(gene==chp)
    {
      strbuf_append_str(fa, "chp.fa");
    }
  
  else if(gene==sak)
    {
      strbuf_append_str(fa, "sak.fa");
    }
  
  else if(gene==scn)
    {
      strbuf_append_str(fa, "scn.fa");
    }
  
  else if (gene==unspecified_gpg)
    {
      strbuf_reset(fa);
      return false;
    }
  return true;
}

const char* map_enum_to_gene_name(GenePresenceGene gene)
{
   switch (gene) 
   {
    
    case vgbA : return "vgbA";
    
    case aacAaphD : return "aacAaphD";
    
    case IsaB : return "IsaB";
    
    case aadEant6Ia : return "aadEant6Ia";
    
    case aadDaph4Ia : return "aadDaph4Ia";
    
    case qacB : return "qacB";
    
    case qacA : return "qacA";
    
    case cfr : return "cfr";
    
    case blaZ : return "blaZ";
    
    case lnuA : return "lnuA";
    
    case lnuB : return "lnuB";
    
    case ermB : return "ermB";
    
    case ermC : return "ermC";
    
    case ermA : return "ermA";
    
    case ermY : return "ermY";
    
    case mupB : return "mupB";
    
    case mupA : return "mupA";
    
    case aph2Ic : return "aph2Ic";
    
    case ant9Ia : return "ant9Ia";
    
    case ermT : return "ermT";
    
    case ant9Ib : return "ant9Ib";
    
    case aphA3aph3III : return "aphA3aph3III";
    
    case dfrA : return "dfrA";
    
    case vgaALC : return "vgaALC";
    
    case dfrC : return "dfrC";
    
    case dfrD : return "dfrD";
    
    case dfrG : return "dfrG";
    
    case mecC : return "mecC";
    
    case mecA : return "mecA";
    
    case dfrK : return "dfrK";
    
    case vgaB : return "vgaB";
    
    case vgaA : return "vgaA";
    
    case tetK : return "tetK";
    
    case tetM : return "tetM";
    
    case tetL : return "tetL";
    
    case tetO : return "tetO";
    
    case msrA : return "msrA";
    
    case mphC : return "mphC";
    
    case sat4 : return "sat4";
    
    case cat : return "cat";
    
    case vanA : return "vanA";
    
    case vanC : return "vanC";
    
    case vanB : return "vanB";
    
    case fusB : return "fusB";
    
    case fusC : return "fusC";
    
    case str : return "str";
    
    case qacCsmr : return "qacCsmr";
    
    case arcA : return "arcA";
    
    case arcB : return "arcB";
    
    case arcC : return "arcC";
    
    case arcD : return "arcD";
    
    case ccrA : return "ccrA";
    
    case ccrB : return "ccrB";
    
    case ccrCa : return "ccrCa";
    
    case ccrCb : return "ccrCb";
    
    case ccrCc : return "ccrCc";
    
    case eta : return "eta";
    
    case etb : return "etb";
    
    case etd : return "etd";
    
    case luk : return "luk";
    
    case lukPVF : return "lukPVF";
    
    case lukPVS : return "lukPVS";
    
    case lukM : return "lukM";
    
    case lukMF : return "lukMF";
    
    case sasX : return "sasX";
    
    case sea : return "sea";
    
    case seb : return "seb";
    
    case sec : return "sec";
    
    case sed : return "sed";
    
    case see : return "see";
    
    case seg : return "seg";
    
    case seh : return "seh";
    
    case sei : return "sei";
    
    case sej : return "sej";
    
    case seu : return "seu";
    
    case selR : return "selR";
    
    case sep : return "sep";
    
    case tsst1 : return "tsst1";
    
    case chp : return "chp";
    
    case sak : return "sak";
    
    case scn : return "scn";
    
    case unspecified_gpg  : return "unknown";
   }
   return "unknown";
}

GeneInfo* alloc_and_init_gene_info()
{
  GeneInfo* gi = (GeneInfo*) calloc(1, sizeof(GeneInfo));
  if (gi==NULL)
    {
      die("Can't alloc gi\n");
    }
  gi->strbuf=strbuf_new(); 
  gi->name = unspecified_gpg;
  return gi;
}
void free_gene_info(GeneInfo* gi)
{
  strbuf_free(gi->strbuf);
  free(gi);
}
void copy_gene_info(GeneInfo* from_gi, GeneInfo* to_gi)
{
  to_gi->median_covg = from_gi->median_covg;
  to_gi->min_covg = from_gi->min_covg;
  to_gi->percent_nonzero = from_gi->percent_nonzero;
  to_gi->median_covg_on_nonzero_nodes = from_gi->median_covg_on_nonzero_nodes;
  to_gi->num_gaps=from_gi->num_gaps;
  to_gi->len=from_gi->len;
  strbuf_reset(to_gi->strbuf);
  strbuf_append_str(to_gi->strbuf, from_gi->strbuf->buff);
  to_gi->name = from_gi->name;
}

void reset_gene_info(GeneInfo* gi)
{
  if (gi==NULL)
    {
      return;
    }
  gi->median_covg=0;
  gi->min_covg=0;
  gi->percent_nonzero=0;
  gi->median_covg_on_nonzero_nodes=0;
  gi->len=0;
  gi->num_gaps=0;
  if (gi->strbuf!=NULL)
    {
      strbuf_reset(gi->strbuf);
    }
  gi->name = unspecified_gpg;
}

//assume you are going to repeatedly call this on a fasta
//file of genes
int get_next_gene_info(FILE* fp, 
		       dBGraph* db_graph, 
		       GeneInfo* gene_info,
		       Sequence* seq, 
		       KmerSlidingWindow* kmer_window,
		       int (*file_reader)(FILE * fp, 
					  Sequence * seq, 
					  int max_read_length, 
					  boolean new_entry, 
					  boolean * full_entry),
		       dBNode** array_nodes, 
		       Orientation*  array_or,
		       CovgArray* working_ca, 
		       int max_read_length)

{

  boolean full_entry=true;
  int dummy_colour_ignored=0;
  int num_kmers = 
    align_next_read_to_graph_and_return_node_array(fp, 
						   max_read_length, 
						   array_nodes, 
						   array_or, 
						   false, 
						   &full_entry, 
						   file_reader,
						   seq, 
						   kmer_window, 
						   db_graph, 
						   dummy_colour_ignored);

  if (num_kmers==0)
    {
      return 0;
    }
  else
    {
      gene_info->len=num_kmers;
    }
  //collect min, median covg on gene and also percentage of kmers with any covg
  boolean too_short=false;
  int ignore_first=0;
  int ignore_last=0;
  gene_info->median_covg = 
    median_covg_on_allele_in_specific_colour(array_nodes,
					     num_kmers,
					     working_ca,
					     0,
					     &too_short,
					     ignore_first, ignore_last);
  gene_info->min_covg = 
    min_covg_on_allele_in_specific_colour(array_nodes,
					  num_kmers,
					  0,
					  &too_short,
					  ignore_first, ignore_last);
  gene_info->percent_nonzero = 
    percent_nonzero_on_allele_in_specific_colour(array_nodes,
						 num_kmers,
						 0,
						 &too_short,
						 ignore_first, ignore_last);


  gene_info->median_covg_on_nonzero_nodes = 
    median_covg_ignoring_zeroes_on_allele_in_specific_colour(array_nodes,
							     num_kmers,
							     working_ca,
							     0,
							     &too_short,
							     ignore_first, ignore_last);
  gene_info->num_gaps = 
    num_gaps_on_allele_in_specific_colour(array_nodes, 
					  num_kmers,
					  0,
					  &too_short,
					  ignore_first, ignore_last);


  strbuf_reset(gene_info->strbuf);
  strbuf_append_str(gene_info->strbuf,
		    seq->name);
  gene_info->name 
    = map_string_to_gene_presence_gene(gene_info->strbuf);

  return num_kmers;
}