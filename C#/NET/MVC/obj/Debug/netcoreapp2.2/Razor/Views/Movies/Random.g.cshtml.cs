#pragma checksum "/home/doc/Projetos/NET/MVC/Views/Movies/Random.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "c3a4687e7ae4507a2c2e39ee4fbe209e13c24654"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Movies_Random), @"mvc.1.0.view", @"/Views/Movies/Random.cshtml")]
[assembly:global::Microsoft.AspNetCore.Mvc.Razor.Compilation.RazorViewAttribute(@"/Views/Movies/Random.cshtml", typeof(AspNetCore.Views_Movies_Random))]
namespace AspNetCore
{
    #line hidden
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Threading.Tasks;
    using Microsoft.AspNetCore.Mvc;
    using Microsoft.AspNetCore.Mvc.Rendering;
    using Microsoft.AspNetCore.Mvc.ViewFeatures;
#line 1 "/home/doc/Projetos/NET/MVC/Views/_ViewImports.cshtml"
using MVC;

#line default
#line hidden
#line 2 "/home/doc/Projetos/NET/MVC/Views/_ViewImports.cshtml"
using MVC.Models;

#line default
#line hidden
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"c3a4687e7ae4507a2c2e39ee4fbe209e13c24654", @"/Views/Movies/Random.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"7d7a8f56340c239c091cff637a00cc2fdf252300", @"/Views/_ViewImports.cshtml")]
    public class Views_Movies_Random : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<MVC.Models.Movie>
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
#line 2 "/home/doc/Projetos/NET/MVC/Views/Movies/Random.cshtml"
  
    ViewBag.Title = "Random";
    Layout = "_Layout";

#line default
#line hidden
            BeginContext(83, 5, true);
            WriteLiteral("\n<h2>");
            EndContext();
            BeginContext(89, 10, false);
#line 7 "/home/doc/Projetos/NET/MVC/Views/Movies/Random.cshtml"
Write(Model.Name);

#line default
#line hidden
            EndContext();
            BeginContext(99, 5, true);
            WriteLiteral("</h2>");
            EndContext();
        }
        #pragma warning restore 1998
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.IModelExpressionProvider ModelExpressionProvider { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IUrlHelper Url { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IViewComponentHelper Component { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IJsonHelper Json { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<MVC.Models.Movie> Html { get; private set; }
    }
}
#pragma warning restore 1591
