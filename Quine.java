public final class Quine {
    private static final char DBL_QUOTE_ASCII = (char) 34;

    private static final String[] CODE = {
        "    ",
        "    private static void printBeginning() {",
        "        System.out.println(%1$cpublic final class Quine {%1$c);",
        "        System.out.println();",
        "        System.out.println(%1$c    private static final String[] CODE = {%1$c);",
        "        ",
        "        for (String line : CODE) {",
        "            System.out.println(%1$c    %1$c + DBL_QUOTE_ASCII + line + DBL_QUOTE_ASCII",
        "                               + %1$c,%1$c);",
        "        }",
        "        ",
        "        System.out.println(%1$c};%1$c);",
        "    }",
        "    ",
        "    public static void main(String[] args) {",
        "        printBeginning();",
        "        ",
        "        for (String line : CODE) {",
        "            System.out.format(line, DBL_QUOTE_ASCII);",
        "            System.out.println();",
        "        }",
        "    }",
        "}"
    };
    
    private static void printBeginning() {
        System.out.println("public final class Quine {");
        System.out.println("    private static final char DBL_QUOTE_ASCII = (char) 34;");
        System.out.println();
        System.out.println("    private static final String[] CODE = {");

        for (String line : CODE) {
            System.out.println("    " + DBL_QUOTE_ASCII + line + DBL_QUOTE_ASCII
                                + ",");
        }

        System.out.println("};");
    }
    
    public static void main(String[] args) {
        printBeginning();

        for (String line : CODE) {
            System.out.format(line, DBL_QUOTE_ASCII);
            System.out.println();
        }
    }
}
